/******************************************************************************

                          ESERCIZIO 3.38 (Contare i 7)
                       
                           

*******************************************************************************/

#include <stdio.h>
int main(void)
{
printf("%s", "Enter a 5-digit number: "); // ricevi il numero dall'utente 
int number;
scanf("%d", &number);

int numCopy = number;
int factor = 10000; // imposta factor per ottenere le cifre 
int sevens = 0; // contatore dei sette
// ripeti attraverso ciascuna delle 5 cifre 
while (factor >= 1) {
          int digit = numCopy / factor; // ottieni la cifra successiva
          if (digit == 7) { // se la cifra è uguale a 7, incrementa sevens 
          ++sevens;
          }
          numCopy %= factor;
          factor /= 10;
   }
   
   // stampa il numero di sette
   printf("The number %d has %d seven(s) in it\n", number, sevens);
}