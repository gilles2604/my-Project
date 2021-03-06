#include "listOfList.h"

/***********************AJOUTE**************************/
void list2_insert(list2 **l, int nodeid, list *peres) {
	list2 *tmp = malloc(sizeof(list2));
	if (!tmp) {
		printf("erreur de creation de la liste\n");
		exit(-5);
	}

	tmp->node = nodeid;
	tmp->peres = Nullptr(list);
	list_copy(&tmp->peres, peres);
	tmp->suiv = *l;
	*l = tmp;
}

void list2_get_list(list **l, list2 *list2, int pere) {
	*l = Nullptr(list);
	while (list2) {
		if(list2->node==pere)	list_copy(l,list2->peres);
		list2=list2->suiv;
	}
}


void list2_insert_fils(list2 **l2, int pere, int fils) {
	list2 *tmp1 = *l2;
	int test = 1;
	while (tmp1 && test == 1) {
		if (tmp1->node == pere) {
			list_insert(&tmp1->peres, fils);
			test = 0;
		}
		tmp1 = tmp1->suiv;
	}

	if (test == 1) {
		list2 *tmp = malloc(sizeof(list2));
		if (!tmp) {
			printf("erreur de creation de la liste\n");
			exit(-5);
		}

		tmp->node = pere;
		tmp->peres = Nullptr(list);
		list *inter = Nullptr(list);
		list_insert(&inter, fils);
		list_copy(&tmp->peres, inter);
		tmp->suiv = *l2;
		*l2 = tmp;
	}
}

/***********************AFFICHAGE**************************/

void list2_affiche(list2 *l) {
	while (l) {
		printf("%d\t", l->node);
		list_affiche(l->peres);
		l = l->suiv;
	}
	printf("\n\n");
}

/***********************TAILLE**************************/

int list2_taille(list2 *l) {
	int nbr = 0;
	while (l) {
		nbr++;
		l = l->suiv;
	}
	return nbr;
}
/***********************DESTRUCTION**************************/

void list2_detruire(list2 **l) {
	list2 *tmp = *l;
	while (*l) {
		tmp = (*l)->suiv;
		list_detruire(&(*l)->peres);
		free(*l);
		*l = tmp;
	}
}
/***********************RECHERCHE**************************/
int list2_recherche(list2 *l, int val) {
	int bol = 0;
	while (l && !bol) {
		if (l->node == val)
			bol = 1;
		l = l->suiv;
	}
	return bol;
}
int list2_recherche_pere(list2 *l, int val) {
	int bol = 0;
	while (l) {
		if (list_recherche(l->peres, val))
			bol++;
		l = l->suiv;
	}
	return bol;
}

/*********************************COPIER*******************************/
void list2_copy(list2 **des, list2 *src) {
	while (src) {
		list2_insert(des, src->node, src->peres);
		src = src->suiv;
	}
}

/*************************************SUPPRIME***********************/

int list2_delete(list2 **l, int val) {
	if (!list2_recherche(*l, val))
		return 0;

	if ((*l)->node == val) {
		list2 *tmp = *l;
		*l = (*l)->suiv;
		list_detruire(&tmp->peres);
		free(tmp);
		return 1;
	} else {
		list2 *tmp = *l;
		while (tmp->suiv->node != val)
			tmp = tmp->suiv;
		list2 *tmp2 = tmp->suiv;
		tmp->suiv = tmp->suiv->suiv;
		list_detruire(&tmp2->peres);
		free(tmp2);
		return 1;
	}//*/
	return 1;
}
//supression d'un pere

int list2_delete_pere_from_fils(list2 *l, int fils, int pere) {
	if (!list2_recherche_pere(l, pere))
		return 0;

	while (l) {
		if (l->node == fils)
			list_delete(&l->peres, pere);
		l = l->suiv;
	}
	return 1;
}
