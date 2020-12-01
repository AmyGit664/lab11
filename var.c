/*****************************************************************************/
/*** fichier: var.c                                                        ***/
/*** Calcul de la variance d'un tableau                                    ***/
/*****************************************************************************/

#include <stdio.h>
#include <math.h>
#include "var.h"


void variance(int *tab, int nb, float *var)
{
	double moyenne;
	int som, i;
        som = 0;
        for (i=0; i<nb; i++)
        {
                som = som + tab[i];
        }
        moyenne = som / nb;
	printf("La moyenne des valeurs du tableau est: %f\n", moyenne);

	double somme;
	float pvar;
	somme = 0;
	for (i=0; i<nb; i++)
	{
		somme = somme + (tab[i] - moyenne)*(tab[i] - moyenne);
	}
	pvar = somme / nb;
	*var = pvar;

}
