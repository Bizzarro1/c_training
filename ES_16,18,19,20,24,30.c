/* 2.16 (Aritmetica) Scrivete un programma che chieda all'utente di inserire due numeri, 
che li legga e ne stampi la somma, il prodotto, la differenza, il quoziente ed il resto.
*/

#include <stdio.h>

int main(void){

int num1;
int num2;
int sum;
int product;
int difference;
int module;
int cont;
float division;

cont = 0;

while (cont == 0) 
{
    printf("Inserisci due numeri:\n");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    module = num1 % num2;
    product = num1 * num2;
    division = num1 / num2;

    printf("The sum is:%d\n", sum);
    printf("The difference is:%d\n", difference);
    printf("The module is:%d\n", module);
    printf("The product is:%d\n", product);
    printf("The real division is: %f\n", division);

    printf("\nInserisci 0 per ripetere le operazioni, 1 per terminare:\n");
    scanf("%d", &cont);
    printf("\n\n");
    
} // fine di while
return 0;
} // fine del programma

/*
2.18 (Confronto di interi) Scrivete un programma che chieda all'utente di inserire due interi, 
che legga tali numeri e quindi stampi il numero maggiore seguito dalle parole “is larger”. 
Se i numeri sono uguali, stampate il messaggio “These numbers are equal”. 
Usate solamente la forma a selezione singola dell'istruzione IF che avete imparato in questo capitolo.
*/

#include <stdio.h>
int main()
{
    int num1;
    int num2;
    
while ((num1 != -1) && (num2 != -1)) {
    printf("Insert num1:\n");
    scanf("%d", &num1);
    
    printf("Insert num2:\n");
    scanf("%d", &num2);

if (num1 > num2) {
    printf("num1 is larger than num2\n");
} // fine di if

if (num1 < num2 ) {    
    printf("num2 is larger than num1\n");
    } // fine di if
    
if (num1 == num2 ) {
    printf("These numbers are equal\n");
} // fine di if
} // fine di while
    return 0;
}

/*
2.19 (aritmetica, valore maggiore e valore minore)
inserisci tre interi a, b, c
stampa somma, media, prodotto, minore e maggiore
*/

#include <stdio.h>

int main()
{
    int a,b,c ;
    int sum;
    float mean;
    int product;
    int max;
    int min;
    
    while ((a != -1) || (b != -1 ) || (c != -1 )) 
    {
    printf("Insert first number:\n");
    scanf("%d", &a);
    printf("Insert second number:\n");
    scanf("%d", &b); 
       printf("Insert third number:\n");
    scanf("%d", &c);
    
    sum = a + b + c;
    product = a * b * c;
    mean = (float) sum / 3;
    
    printf("The sum is:%d\n", sum);
    printf("The product is:%d\n", product);
    printf("The mean is:%.3f\n", mean);
    
    if ( (a > b) && (a > c)) {
        printf(" a is max\n"); 
    }// fine di if
    if (( b > a) && (b > c)) {
        printf("b is max\n");
    } // fine di if
    if ((c > a) && (c > b)) {
        printf("c is max\n");
    } // fine di if
    
    if ((a < b) && (a < c)) {
        printf("a is min\n");
    } // fine di if
    if ((b< a) && (b < c)) {
        printf("b is min\n");
    } // fine di if
    if ((c < a) && (c < b)) {
        printf("c is min\n");
    } // fine di if
    } // fine di while
    return 0;
} // fine del programma

/*
2.20 (Diametro, circonferenza ed area di un cerchio) 
Scrivete un programma che legga il raggio di un cerchio e stampi il diametro, 
la circonferenza e l'area del cerchio. 
Usate il valore costante 3,14159 per Pgreco. 
Effettuate ognuno di questi calcoli all'interno dell'istruzione PRINTF e usate lo specificatore di conversione %f. 
[solo variabili intere ]
*/

# include <stdio.h>


int main (void) {

    // raggio, circonferenza, diametro ed area
    float radius, circumference, diameter, area;
    // pi greco
    float pi = 3.14159; 
      printf("%s","Insert the radius value:");
    scanf("%f", &radius);

    // Diametro della circonferenza e dell'area di un cerchio
    // diameter = 2*radius
    // circumference = 2*pi*radius
    // area = pi * radius * radius

while (radius != -1)
{
    diameter = 2 * radius ;
    printf("The diameter is:%2.4f\n", 2 * radius);

    circumference = 2* pi* radius;
    printf("The circumference is:%2.4f\n", 2 * pi * radius);

    area = pi * radius * radius;
    printf("The area is :%2.4f\n", pi * radius * radius);
    
    printf("Inserisci il raggio: (-1 per terminare):");
    scanf("%f", &radius);

} // fine del while

    return 0;
    
} // fine del programma

/*2.24 (Dispari o Pari) Scrivete un programma che legga un intero e determini e stampi se sia dispari o pari.
 Usate l'operatore di resto. Un numero pari è multiplo di due. 
 Se 2n/2 → resto 0.
 */

 #include <stdio.h>
int main (void)
{
int numero;
printf("Inserisci un numero (-1 per terminare):");
scanf("%d", &numero);

while (numero !=-1) {

if  (numero%2 == 0)
{
printf("\n Il numero %d è pari" );
} 
else {
    printf("\n Il numero %d è dispari ");
} // fine di else
printf("\n Inserisci un numero (-1 per terminare):");
scanf("%d", &numero);

} // fine del while

return 0;
} // fine del programma

/*2.30 (Separazione delle cifre di un intero) Scrivete un programma che riceva in ingresso un numero di cinque cifre, 
separi il numero nelle sue cifre individuali e stampi le cifre ciascuna separata dall'altra da tre spazi. 
(usiamo combinazioni di divisioni intere e con resto)*/

#include <stdio.h>
int main (void)
{

int numero; // numero inserito dall'utente
int temporaneo; // numero temporaneo, indica il resto dell'operazione

printf("Inserisci un numero di cinque cifre (-1 per terminare):");
scanf("%d", &numero);

while ( numero != -1 ) {
    // dividi per 10000 e stampa l'intero
    
    printf("%d", numero/10000); // stampa la cifra più a sinistra
    temporaneo = numero % 10000;
    
    while ( temporaneo ) {
    
    
    
    } // fine di while
    
    printf("\nInserisci un numero di cinque cifre (-1 per terminare):");
scanf("%d", &numero);
    
} // fine di while

return 0;
} // fine del programma




