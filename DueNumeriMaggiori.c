/******************************************************************************

       ESERCIZIO 3.26 (Trovare i due numeri più grandi)

*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int n, i, num=0, max1=0, max2=0;
	
	
		printf("Quanti numeri inserire?: "); // leggi quanti numeri inserire
		scanf("%d", &n);
	
	for(i=0;i<n;i++)     
	{ 
		printf("Numero %d:", i+1);
		scanf("%d", &num);
		
		if (num > max1) 
		{
		max2 = max1;
		max1 = num;
		} 
		else {
		    if (num > max2)
		    // se è maggiore della valore contenuto nella variabile max2 inseriscilo
		    // se minore ignoralo
		    {
		        max2 = num;
		    } // fine di if
		} // fine di if else
		
	} // fine di for
	
	printf("I due valori maggiori sono : %d\t%d\n", max1, max2);
	return 0;
} // fine del programma


