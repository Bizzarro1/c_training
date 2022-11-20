
/***************************
 
 
 
 ESERCIZIO 4.26 (Calcolo del valore di PIgreco)
 
 ******************************/
 
 
 #include <stdio.h>
 
 int main (void) {
     
     unsigned int accuracy = 400000; // imposta la precisione decimale 
     printf("Accuracy set at: %u\n", accuracy);
// stampa le intestazioni di tabella 
puts("term\t\t pi");
double pi = 0.0; // valore approssimato per pi
double num = 4.0; // numeratore
double denom = 1.0; // denominatore del termine corrente
// effettua un'iterazione attraverso ciascun termine 
for (unsigned int loop = 1; loop <= accuracy; ++loop) {
// se il termine è un numero dispari, aggiungi il termine corrente 
if (loop % 2 != 0) {
         pi += num / denom;
         
}
else { // se il termine è un numero pari, sottrai il termine corrente
   pi -= num / denom;
}
// stampa il numero di termini e il valore approssimato
// per pi con 6 cifre di precisione 
printf("%u\t\t%f\n", loop, pi);

denom += 2.0; // aggiorna il denominatore 
}
     
     return 0;
 } // fine del programma



























