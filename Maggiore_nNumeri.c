/*
ESERCIZIO 3.23 (Trovare il numero più grande)
*/


*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int n, i, num=0, max=0;
	
	do {
		printf("Quanti numeri inserire?: ");
		scanf("%d", &n);
	}while (n<=0); // fine di do while
	
	for(i=0;i<n;i++)
	{
		printf("Numero %d:", i+1);
		scanf("%d", &num);
		if(num>max) max=num;
	} // fine di for
	
	printf("Il valore massimo e': %d\n", max); // stampa il valore massimo
	return 0;
} // fine del programma
