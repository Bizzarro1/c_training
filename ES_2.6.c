/******************************************************************************

ESERCIZIO 2.6 
Scrivete un programma che legga due interi inseriti dall'utente, 
quindi ne stampi la somma, il prodotto, la differenza, il quoziente ed il resto. 



#include <stdio.h>

int main()
{
    int a,b,sum, product, difference, mod;
    float quoziente;
    
   printf("Benvenuto! Questo programma ci permettera' di effettuare l'addizione, la moltiplicazione, la sottrazione e la divisione.\nS per continuare, N per terminare.\nRisposta: ");
	char var_scelta = 'N';
	int scelta = 0;
	scanf("%c",&var_scelta);
	
	while(var_scelta == 'S' || var_scelta == 's'){
	 
	 
	 printf("%s","Inserisci due numeri:\n");
	 scanf("%d\n", &a);
	 scanf("%d", &b);
	 
	 sum = a + b;
	 difference = a - b;
	 mod = a % b;
	 product = a * b;
	 quoziente = a / b;
	 
	 printf("La somma è : %d\n", sum);
	 printf("La differenza è : %d\n", difference);
	 printf("Il prodotto è : %d\n", product);
	 printf("Il modulo è : %d\n", mod);
	 printf("Il quoziente è : %2.4f\n", quoziente);
	 
	} // fine di while

    return 0;
} // fine del programma
*******************************************************************************/