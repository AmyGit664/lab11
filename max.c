/*****************************************************************************/
/*** fichier: max.c                                                        ***/
/*** Calcul de la valeur max d'un tableau contenant N entiers              ***/
/*****************************************************************************/


#include <stdio.h>
#include "max.h"

/* Calcul du max */

void calcul_max (int *tab, int nb, int *pmax){

	int val_max;
	int i;
	val_max = tab[0];

	for (i=0; i<nb; i++)
	{
		if (tab[i] > val_max)
			val_max = tab[i];
	}
	*pmax = val_max;
}
