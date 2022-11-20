/*************************************************
 
ESERCIZIO 4.18 (Programma che stampa grafico a barre)
 
 **************************************************/

#include <stdio.h>
int main(void)
{
printf("%s", "Enter 5 numbers between 1 and 30: ");
// ripeti 5 volte
for (unsigned int i = 1; i <= 5; ++i) {
unsigned int number; // numero corrente 
scanf("%u", &number);
// stampa gli asterischi corrispondenti all'input corrente 
for (unsigned int j = 1; j <= number; ++j) {
         printf("%s", "*");
      }
puts(""); 
  }
}

/*************************************************
 
ESERCIZIO 4.19 (Calcolo delle vendite)
 
 **************************************************/

#include <stdio.h>
int main(void)
{
// richiedi l'input
puts("Enter pairs of item numbers and quantities."); 
puts("Enter -1 for the item number to end input."); 
int product; // numero di prodotto corrente 
scanf("%d", &product);
double total = 0.0; // valore al dettaglio totale corrente

while (product != -1) {
int quantity; // quantita' di prodotto corrente venduto 
scanf("%d", &quantity);
// determina il prodotto poi esegui il calcolo 
switch (product) {
case 1:
total += quantity * 2.98; // aggiorna il totale 
break;
case 2:
total += quantity * 4.50; // aggiorna il totale 
break;
case 3:
total += quantity * 9.98; // aggiorna il totale 
break;
case 4:
total += quantity * 4.49; // aggiorna il totale
break;
case 5:
total += quantity * 6.87; // aggiorna il totale
break;

default:
printf("Invalid product code: %d\n", product); 
printf(" Quantity: %d\n", quantity);
}
scanf("%d", &product); // ricevi l'input successivo 
}
// stampa il valore al dettaglio totale
printf("The total retail value was: %.2f\n", total);
}
