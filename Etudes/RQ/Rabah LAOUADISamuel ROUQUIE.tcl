set ns [new Simulator]

$ns color 0 blue
$ns color 1 red
$ns color 2 black
$ns color 3 green

set n0 [$ns node]
set n1 [$ns node]

set FQ  [open filAtt.tr w]
set f [open out.tr w]
$ns trace-all $f
set nf [open out.nam w]
$ns namtrace-all $nf

$ns duplex-link $n0 $n1 2Mb 20ms DropTail

set spy [$ns monitor-queue $n0 $n1 $FQ]

#UDP
set udp0 [new Agent/UDP]
$ns attach-agent $n0 $udp0
$udp0 set class_ 3

set null0 [new Agent/Null]
$ns attach-agent $n1 $null0

$ns connect $udp0 $null0


#TCPS
set tcp0 [new Agent/TCP]
$ns attach-agent $n0 $tcp0
$tcp0 set class_ 0


set tcp1 [new Agent/TCP]
$ns attach-agent $n0 $tcp1
$tcp1 set class_ 1

set tcp2 [new Agent/TCP]
$ns attach-agent $n0 $tcp2
$tcp2 set class_ 2

set sink0 [new Agent/TCPSink]
$ns attach-agent $n1 $sink0

set sink1 [new Agent/TCPSink]
$ns attach-agent $n1 $sink1

set sink2 [new Agent/TCPSink]
$ns attach-agent $n1 $sink2

$ns connect $tcp0 $sink0
$ns connect $tcp1 $sink1
$ns connect $tcp2 $sink2


#applications
set cbr0 [new Application/Traffic/CBR]
$cbr0 set packetSize_ 20936	
$cbr0 set interval_ 50ms		
$cbr0 attach-agent $tcp0

set cbr1 [new Application/Traffic/CBR]
$cbr1 set packetSize_ 41872
$cbr1 set interval_ 100ms
$cbr1 attach-agent $tcp1
	
set cbr2 [new Application/Traffic/CBR]
$cbr2 set packetSize_ 62808
$cbr2 set interval_ 150ms
$cbr2 attach-agent $tcp2

set cbr3 [new Application/Traffic/Exponential]
$cbr3 set rate_ 2Mb
$cbr3 set burst_time_ 100ms
$cbr3 set idle_time_ 100ms
$cbr3 attach-agent $udp0


$ns at 0.1 "$cbr0 start"
$ns at 0.1 "$cbr1 start"
$ns at 0.1 "$cbr2 start"
$ns at 0.1 "$cbr3 start"

$ns at 10.0 "finish"
$ns at 0.2 "tailleTcp"
#FILE aTTENT + Window
$ns queue-limit $n0 $n1 100
#$tcp0 set window_ 10
#$tcp1 set window_ 10
#$tcp2 set window_ 10

#Statistiques
#TCP FenaitreTAILLE des FENETRE
set delaiTcp 0.01

proc tailleTcp {} {
	global ns delaiTcp tcp0 tcp1 tcp2
	set now [$ns now]
	set newAt [expr $now + $delaiTcp]  

	puts "TCP0 a l'instant $now [$tcp0 set cwnd_]"
	$ns at  $newAt "tailleTcp"
}

#Monitor TCPs
$tcp0 set fid_ 0
$tcp1 set fid_ 1
$tcp2 set fid_ 2
$udp0 set fid_ 3

set flowtcp0 [$ns makeflowmon Fid]
set link0 [$ns link $n0 $n1]
$ns attach-fmon $link0 $flowtcp0
set fcl [$flowtcp0 classifier]


#FILE d'attent
set delaiFile 0.01
set tcpF0 [open tcp0.tr w]
set tcpF1 [open tcp1.tr w]
set tcpF2 [open tcp2.tr w]

proc tailleTcp {} {
	global ns delaiFile tcpF0 tcpF1 tcpF2 tcp0 tcp1 tcp2 FQ spy
	set now [$ns now]
	set newAt [expr $now + $delaiFile]  

#TAILLE des FENEAITRE
	puts $tcpF0  	"0 $now [$tcp0 set cwnd_]"
	puts $tcpF1 	"1 $now [$tcp1 set cwnd_]"
	puts $tcpF2 	"2 $now [$tcp2 set cwnd_]"
        puts $FQ	"$now [$spy set pkts_ ]"
	$ns at  $newAt "tailleTcp"
}


proc finish {} {
	global ns f nf cbr0 cbr1 cbr2 cbr3 spy fcl tcp0 tcp1 tcp2
	$ns flush-trace
	close $f
	close $nf

	puts "Def Max Windows [$tcp0 set window_ ]"
	#puts "ON def [$cbr3 set burst_time_]"
	#puts "OFF def [$cbr3 set idle_time_]"
	#puts "packet size defalt [$cbr2 set packetSize_]"
	#puts "interval default [$cbr2 set interval_]"
	#puts "rate default [$cbr2 set rate_]"

	puts "LES PARAMAITRE  INITIALs"
	puts "packet CBR0  [$cbr0 set packetSize_]\t-Interval\t[$cbr0 set interval_]"
	puts "packet CBR1  [$cbr1 set packetSize_]\t-Interval\t[$cbr1 set interval_]"
	puts "packet CBR2  [$cbr2 set packetSize_]\t-Interval\t[$cbr2 set interval_]"
	puts "packet EXP   [$cbr3 set packetSize_]\t-Rate \t\t[$cbr3 set rate_]"


	puts "\n Les PARAMAITRES de SORTIe"
	puts "Les packets"

	puts "packet envoyer [$spy set pdepartures_]"
	puts "packet recus [$spy set parrivals_]"
	puts "packet droped [$spy set pdrops_]"
	puts "Le taux de perte globale [expr [format %f [$spy set pdrops_]]/[format %f [$spy set pdepartures_]]]"


	puts "\n DEBIT Moyenne"
	puts "nombre de octets envoyer [$spy set bdepartures_]"
	puts "le temps de Simulation est de [$ns now] s"
	puts "le debit crete est de 250000 octets/s"
	puts "le debit moyen est de  [expr [format %f [$spy set bdepartures_]]/[format %f [$ns now]]]  octets/s"


	set stats_tcp0 [$fcl lookup auto 0 0 0]
	
	puts "\n PARAMAITRE dechaque TCP"
	puts "TCP0:"
	#puts "packet envoyer [$stats_tcp0 set pdepartures_]"
	#puts "packet recus [$stats_tcp0 set parrivals_]"
	#puts "packet droped [$stats_tcp0 set pdrops_]"
	puts "TCP Le taux de perte [expr [format %f [$stats_tcp0 set pdrops_]]/[format %f [$stats_tcp0 set pdepartures_]]]"
	puts "le debit moyen est de  [expr [format %f [$stats_tcp0 set bdepartures_]]/[format %f [$ns now]]]  octets/s"


	set stats_tcp1 [$fcl lookup auto 0 0 1]
	puts "\nTCP1:"
	#puts "packet envoyer [$stats_tcp1 set pdepartures_]"
	#puts "packet recus [$stats_tcp1 set parrivals_]"
	#puts "packet droped [$stats_tcp1 set pdrops_]"
	puts "TCP Le taux de perte [expr [format %f [$stats_tcp1 set pdrops_]]/[format %f [$stats_tcp1 set pdepartures_]]]"
	puts "le debit moyen est de  [expr [format %f [$stats_tcp1 set bdepartures_]]/[format %f [$ns now]]]  octets/s"

	set stats_tcp2 [$fcl lookup auto 0 0 2]
	puts "\nTCP2:"
	#puts "packet envoyer [$stats_tcp2 set pdepartures_]"
	#puts "packet recus [$stats_tcp2 set parrivals_]"
	#puts "packet droped [$stats_tcp2 set pdrops_]"
	puts "TCP Le taux de perte [expr [format %f [$stats_tcp2 set pdrops_]]/[format %f [$stats_tcp2 set pdepartures_]]]"
	puts "le debit moyen est de  [expr [format %f [$stats_tcp2 set bdepartures_]]/[format %f [$ns now]]]  octets/s"

	
	set stats_udp [$fcl lookup auto 0 0 3]
	puts "\nUDP:"
	#puts "packet envoyer [$stats_udp set pdepartures_]"
	#puts "packet recus [$stats_udp set parrivals_]"
	#puts "packet droped [$stats_udp set pdrops_]"
	puts "TCP Le taux de perte [expr [format %f [$stats_udp set pdrops_]]/[format %f [$stats_udp set pdepartures_]]]"
	puts "le debit moyen est de  [expr [format %f [$stats_udp set bdepartures_]]/[format %f [$ns now]]]  octets/s"


    	exit 0
}

$ns run	
