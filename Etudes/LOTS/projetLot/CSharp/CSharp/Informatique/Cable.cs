using System;
		this.name=name;
	}

	override public bool compatibleGraphe(Graphe graphe) {
		return (graphe is Reseau);
	}

	override public bool compatibleSommet(Sommet sommet) {
		return (sommet is Ordinateur);
	}
