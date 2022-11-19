/*
A) Programma che legga un numero intero non negativo e calcoli e stampi il suo fattoriale.
B) Programma che valuti il valore della costante matematica e di Nepero usando la formula:

e = 1 + 1/1! + 2/2! + ...

C) Programma che calcoli il valore di e^x usando la formula:

e^x = 1 + x/1! + x^2/2! + x^3/3! + ...
*/

// Parte A)
#include <stdio.h>
 int main (void) {
    int number = -1;
// ripeti finche' l'input non e' valido
    while ( number < 0 ) {
        printf("%s","Enter a positive integer: ");
        scanf("%d", &number);
    } // fine di while

    int n = number; // fattore di moltiplicazione
    int factorial = 1; // risultato fattoriale

    // calcola il fattoriale
    while( n >= 0 ) {
          if (n == 0) {
            factorial *= 1;
          } else {
               factorial *= n;
          }

          --n;
    } // fine di while

// stampa il risultato fattoriale
printf("%d! is %d\n", number, factorial);
 
 return 0;
 } // fine del programma


// B) 

 #include <stdio.h>
int main(void)
{
int n = 0; // ripeti il conteggio per precisione 
int fact = 1; // fattoriale di n corrente
int accuracy = 10; // livello di precisione
float e = 0; // valore stimato corrente di e
// continua fino al livello di precisione 
while (n <= accuracy) {
      if (n == 0) {
         fact *= 1;
}
else {
fact *= n; }
      e += 1.0 / fact;
++n; }
printf("e is %f\n", e); // stampa il valore stimato
}


//C)
#include <stdio.h>
int main(void)
{
int n = 1; // contatore
int accuracy = 15; // livello di precisione
int x = 3; // esponente
float e = 1.0; // e elevato alla potenza di x
float numerator = 1.0; // numeratore di ciascun termine 
float denominator = 1.0; // denominatore di ciascun termine
// somma il numero di termini specificato da accuracy
 while (n <= accuracy) {
      numerator *= x;
      denominator *= n;
      e += numerator / denominator;
      ++n;
}
printf("e raised to the %d power is %f\n", x, e); // stampa il valore 
}