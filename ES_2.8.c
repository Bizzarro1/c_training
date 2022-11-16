/******************************************************************************

    ESERCIZIO 2.7 

*******************************************************************************/
/*********
 f)

 
 #include <stdio.h>
 
 int main (void) 
 {
     int integer;
     
     printf("%s","Enter an integer :");
     scanf("%d", &integer);
     
     return 0;
 } // fine del programma
 
 g)

  
#include <stdio.h>
int main (void)
{
    int x=6,y=5,z ;
    
    z = x % y;
    printf("Remainder of %d divided by %d is %d", x,y,z);
    
    return 0;

} // fine del programma
  h)

  
#include <stdio.h>
int main (void) 
{
    int x,y;
    
    printf("%s","x value :\n");
    scanf("%d", &x);
    printf("%s","y value :\n");
    scanf("%d", &y);
    
    
    if ( x == y )
    {
        printf(" %d is equal to %d", x,y);
    } // fine di if

    
    return 0;
} // fine del programma

i)

  
#include <stdio.h>

int main (void) 
{
    int a,b,sum;
    
    printf("%s","a value :\n");
    scanf("%d",&a);
    printf("b value :\n");
    scanf("%d",&b);
    
    sum = a + b;
    printf("The sum is %d", sum);
    
    return 0;
} // fine del programma

j)

  
#include <stdio.h>

int main (void)
{
int value;

scanf("%d", &value);
printf("The value is : %d", value);

return 0;
} // fine del programma

ESERCIZIO  2.8 

a) I commenti sono usati per documentare un programma e migliorarne la leggibilità.
b) La funzione usata per stampare sullo schermo è printf.
c) Un'istruzione in C che prende una decisione è IF.
d) I calcoli sono normalmente eseguiti da istruzioni algebriche binarie.
e) La funzione scanf legge i valori dalla tastiera.

2.9  Scrivete una singola istruzione o riga in C per eseguire ognuna delle seguenti operazioni.
a) Stampate il messaggio "Enter two numbers"

printf("%s","Enter two numbers\n");

b) Assegnare il prodotto delle variabili b e c alla variabile a

a = b * c;

c) Dichiarare che un programma esegue il calcolo di una retribuzione (ossia usate un testo che serva a documentare il programma)

// Esegui il calcolo di una retribuzione 

d) Leggete tre valori interi dalla tastiera e ponetenli nelle variabili intere a,b,c.

#include <stdio.h>

int main (void) 
{
    int a,b,c;
    
    printf("%s","Insert value a:\n");
    scanf("&d", a);
    printf("%s","Insert value b:\n");
    scanf("&d", b); 
    printf("%s","Insert value c:\n");
    scanf("&d", c);
    
    return 0;
} // fine del programma

*******/
