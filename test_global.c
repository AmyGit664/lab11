/*****************************************************************************/
/*** fichier: test_global.c                    	                           ***/
/*** Calcul de max, min et var			                           ***/
/*****************************************************************************/

#include <stdio.h>
#include "max_min_var.h"

#define nb_val 10

int main ()
{
        int i, min, max;
	float var;
        int table[nb_val] = {4, 9, 10, 11, 12, 15, 12, 9, 0, 30};

        for (i=0; i<nb_val; i++)
                printf("table[%d] = %d\n", i, table[i]);
        printf("\n");

        calcul_max(table, nb_val, &max);
        printf("Max = %d\n", max);

	calcul_min(table, nb_val, &min);
        printf("Min = %d\n", min);
	
	variance(table, nb_val, &var);
        printf("La variance du tableau est: %f\n", var);

	return 0;

}


