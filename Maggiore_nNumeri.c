/*
ESERCIZIO 3.23 (Trovare il numero più grande)
*/

#include <stdio.h>

main()
{
	int n, i, num, max;
	
	do {
		printf("Quanti numeri inserire?: ");
		scanf("%d", &n);
	}while (n<=0);
	
	for(i=0;i<n;i++)
	{
		printf("Numero %d:", i+1);
		scanf("%d", &num);
		if(i==0) max=num;
		if(num>max) max=num;
	} // fine di for
	
	printf("Il valore massimo e': %d\n", max);


} // fine del programma