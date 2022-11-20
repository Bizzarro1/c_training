

/*************************************************
 
ESERCIZIO 4.9 (Somma di una sequenza di interi)
 
 **************************************************/

#include <stdio.h>

int main (void) {
    // stampa il prompt
    printf("%s", "Enter the number of values to be processed: ");
    int number; // numero di valori
    scanf("%d", &number); // input numero di valori
    
    int sum = 0; // somma corrente
    
    // ripeti un numero number di volte
    for (int i = 1; i <= number; ++i) {
        printf("%s", "Enter a value: ");
        int value; // valore corrente
        scanf("%d", &value);
        sum += value;
    }
    
    // stampa la somma
    printf("Sum of the %d values is %d\n", number, sum);
    return 0;
} // fine del programma


/*************************************************
 
ESERCIZIO 4.10 (Calcolare la media di una sequenza di interi)
 
 **************************************************/
 
#include <stdio.h>

int main (void) {
    // stampa il prompt
    printf("%s", "Enter an integer (9999 to end):");
    int value; // valore corrente
    scanf("%d", &value);
    
    unsigned int count = 0; // numero di valori
    int total = 0; // somma di interi
    
    // ripeti finchè non viene letto il valore sentinella
    while( value != 9999) {
        total += value; // aggiorna il totale
        ++count;
        
        // ricevi il valore successivo
        printf("%s", "Enter next integer (9999 to end): ");
        scanf("%d", &value);
    }
    
    // mostrare la media se vengono inseriti piu di 0 valori
    if (count != 0) {
        printf("\nThe average is: %.2f\n", (double) total/count);
    }
    else {
        puts("\nNo values were entered.");
    }
} // fine del programma


/*************************************************
 
ESERCIZIO 4.11 (Trovare il valore più piccolo)
 
 **************************************************/

#include <stdio.h>

int main (void) {
    // richiedi all'utente il numero di interi
    printf("%s", "Enter the number of integers to be processed: ");
    int number; // numero di interi
    scanf("%d", &number);
    
    //richiedi all'utente un intero
    printf("%s","Enter an integer: ");
    int smallest; // numero più piccolo
    scanf("%d", &smallest);
    
    // ripeti finchè l'utente ha inserito tutti gli interi
    for (unsigned int i = 2; i <= number; ++i) {
        printf("%s", "Enter next integer: "); // ricevi l'intero successivo
        int value; // valore inserito dall'utente
        scanf("%d", & value);
        
        // se il valore è più piccolo del più piccolo
        if (value <= smallest) {
            smallest = value;
        } // fine di if
    } // fine del ciclo for
    
    printf("\nThe smallest integer is: %d\n", smallest);
} // fine del programma


/*************************************************
 
ESERCIZIO 4.12 (Calcolare la somma degli interi pari)
 
 **************************************************/

#include <stdio.h>

int main (void) 
{
    int sum;
    for (int i = 0; i <=30; i += 2){
        printf("%d\n", i);
        sum += i;
    } 
    
    printf("Sum : %d\n", sum);
    return 0;
} // fine del programma

/*************************************************
 
ESERCIZIO 4.13 (Calcolare la somma degli interi dispari)
 
 **************************************************/

#include <stdio.h>

int main (void) 
{
    int sum;
    for (int i = 1; i <=15; i += 2){
        printf("%d\n", i);
        sum += i;
    } 
    
    printf("Sum : %d\n", sum);
    return 0;
} // fine del programma

/*************************************************
 
ESERCIZIO 4.14 (Fattoriali)
 
 **************************************************/

#include <stdio.h>
int main(void)
{
puts("X\tFactorial of X"); // stampa le intestazioni di tabella
// calcola il fattoriale degli interi da 1 a 5 
for (unsigned int i = 1; i <= 5; ++i) {
      unsigned int factorial = 1;
// calcola il fattoriale del numero corrente 
for (unsigned int j = 1; j <= i; ++j) {
         factorial *= j;
      }
printf("%u\t%u\n", i, factorial); }
}


/*************************************************
 
ESERCIZIO 4.15 (Programma per l'interesse composto)
 
 **************************************************/

#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 1000.0; // capitale iniziale
    // effettua un'iterazione attraverso i tassi dal 5% al 10% 
    for (int rate = 5; rate <= 10; ++rate) {
        // stampa le intestazioni di tabella 
        printf("Interest Rate: %f\n", rate / printf("%s%21s\n", "Year","Amount on 100.0); deposit");
// calcola la quantità di danaro in deposito per ciascuno dei 10 anni
for (unsigned int year = 1; year <= 10; ++year) {
double amount = principal * pow(1 + (rate / 100.0), year);
      // stampa una riga della tabella
printf("%4u%21.2f\n", year, amount); }
puts("");
 }
}
