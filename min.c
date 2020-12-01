/*****************************************************************************/
/*** fichier: min.c                                                        ***/
/*** Calcul de la valeur min d'un tableau contenant N entiers              ***/
/*****************************************************************************/


#include <stdio.h>
#include "min.h"

/* Calcul du min */

void calcul_min (int *tab, int nb, int *pmin){

        int val_min;
        int i;
        val_min = tab[0];

        for (i=0; i<nb; i++)
        {
                if (tab[i] < val_min)
                        val_min = tab[i];
        }
        *pmin = val_min;
                  
}	
