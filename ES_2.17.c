/******************************************************************************

     ESERCIZO 2.17 (Stampa di valori con printf)
Scrivete un programma che stampi sulla stessa riga i numeri da 1 a 4.


*******************************************************************************/
/************
 a) Una sola istruzione di printf senza specifiche di conversione

 
#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}

b) Una sola istruzione printf con 4 specifiche di conversione

 
 #include <stdio.h>
 
 int main (void) 
 {
     int a=2,b=67,c=5,d=23;
     printf(" a : %d\n b : %d\n c : %d\n d : %d\n ", a, b, c, d);
     return 0;
 } // fine del programma
 
 c) Uso di quattro istruzioni printf
 
 #include <stdio.h>
 
 int main (void)
 {
     int a=1,b=2,c=3,d=4;
     
     printf("The number a is : %d\n", a );
     printf("The number b is : %d\n", b );
     printf("The number c is : %d\n", c );
     printf("The number d is : %d\n", d );
     
     return 0;
 } // fine del programma
 
 
 ESERCIZIO 2.18 (Confronto di interi)
 Scrivete un programma che due interi inseriti dall'utente e quindi stampi il numero maggiore 
 seguito dalle parole "is larger". Se i numeri sono uguali,
 stampate il messaggio "These numbers are equal". 
 Usiamo solo la forma a selezione singola dell'istruzione IF.
 
 
 #include <stdio.h>
 
 int main (void)
{
    int a, b;
    
    printf("%s","Insert two integers: ");
    scanf("%d\n%d", &a, &b);
    
    if ( a == b) 
    {
        printf("%s","These numbers are equal");
        
    } // fine di if
    
    return 0;
} // fine del programma


ESERCIZIO 2.19 (Aritmetica, valore maggiore e valore minore)
Scrivete un programma che riceva in ingresso tre diversi interi dalla tastiera, 
poi stampi la somma, la media, il prodotto, il minore ed il maggiore di questi numeri. 
Usate solamente la forma a selezione singola dell'istruzione IF che avete imparato in questo capitolo.


#include <stdio.h>

int main (void)
{
    int a,b,c, sum, product, mix, max;
    float mean;
    
    printf("%s","Enter tre integers : ");
    scanf("%d\n%d\n%d", &a, &b, &c);
    
    sum = a + b + c;
    printf("The sum is : %d\n", sum);
    product = a * b * c;
    printf("The product is : %d\n", product);
    mean = (a + b + c)/ 3;
    printf("The mean is : %2.4f\n", mean);
    
    if ( a > c && a > b) 
    {
        if ( c > b ) 
        { 
            printf("%s","The max is 'a'\n");
            printf("%s","The min is 'b'\n");
        } // fine di if
        
       if ( b > c ){
            printf("%s","The max is 'a'\n");
            printf("%s","The min is 'c'\n");
        } // fine di else
    } // fine di if
    
     if ( c > a && c > b ) 
    {
        if ( a > b ) 
        { 
            printf("%s","The max is 'c'\n");
            printf("%s","The min is 'b'\n");
        } // fine di if
        
        if ( b > a ) 
        {
            printf("%s","The max is 'c'\n");
            printf("%s","The min is 'a'\n");
        } // fine di if
    } // fine di if
    
    if ( b > a && b > c ) 
    {
        if ( a > c ) 
        { 
            printf("%s","The max is 'b'\n");
            printf("%s","The min is 'c'\n");
        } // fine di if
        
        if ( c > a ) 
        {
            printf("%s","The max is 'b'\n");
            printf("%s","The min is 'a'\n");
        } // fine di if
    } // fine di if
    return 0;
} // fine del programma

********/
