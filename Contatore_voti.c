/******************************************************************************
CONTATORE DI VOTI

*******************************************************************************/


#include <stdio.h>

int main (void) 
{
 
int aCount = 0; // ricordati di azzerare i contatori, sopratttutto
int bCount = 0; // come in questo caso in cui la prima volta che
int cCount = 0; // li usiamo lo facciamo in lettura !!
int dCount = 0;
int fCount = 0;

char end = 'Z' ; 

puts("Enter the letter grades.\n");
puts("Enter the EOF character to end input.\n");
int grade = 0; // un voto

// while acquisisce un carattere con getchar che assegna a grade, 
// ricorda che l'operatore parentesi ha priorità maggiore. 
// Se pigio Invio/Enter senza digitare alcunchè genera 
// il carattere 'newline' (\n) cioè 'ritorno a capo'. 
// Questo simbolo non vale solo per la stampa.

while ((grade = getchar()) != end) 
{
switch (grade) // seleziona una delle case successive in base al valore di grade
{
// qui abbiamo coppie di case che vanno in OR inclusivo
case 'a' :
case 'A' :
++aCount;
break; // interrompe il percorso degli altri casi e ci rimanda direttamente alla fine dello switch, usciti dalla selezione multipla ritorniamo nel ciclo while e quindi alla riga con la condizione di while 

case 'b' :
case 'B' :
++bCount;
break;

case 'c' :
case 'C' :
++cCount;
break;

case 'd' :
case 'D' :
++dCount;
break;
case 'f' :
case 'F' :
++fCount;
break;
case '\n':
case '\t':
case ' ' :
break;


// altro caso di selezione multipla 'default' non ci sono parentesi,
// nella switch non servono parentesi per delimitare sotto blocchi 
// perchè la presenza dei case già identifica il blocco appartenente a switch. 
// Tutti gli altri caratteri non gestiti dai case precedenti.

default: 
printf("%s","Incorrect letter grade enterede.");
printf("\nEnter a new grade.\n");
break;
} // fine di switch
} // fine di while

printf("\nTotal for each letter grade are:");
printf("A : %d\n", aCount);
printf("B : %d\n", bCount);
printf("C : %d\n", dCount);
printf("D : %d\n", dCount);
printf("F : %d\n", fCount);

return 0;
} // fine del programma 