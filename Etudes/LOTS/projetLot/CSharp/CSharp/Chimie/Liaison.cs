using System;
          this.name = name;
	}

	override public bool compatibleGraphe(Graphe graphe) {
		// TODO Auto-generated method stub
		return (graphe is Molecule);
	}

	override public bool compatibleSommet(Sommet sommet) {
		// TODO Auto-generated method stub
		return (sommet is Atome);
	}
