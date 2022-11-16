/******************************************************************************

ESERCIZIO_2.4, 2.5
Scrivere un'istruzione o un commento per realizzare ognuna delle seguenti operazioni.
/*******************************************************************************/
/***********a)
Dichiarare che il programma calcolerà il prodotto di tre interi
************/

// Calcolare il prodotto di tre interi //

/********** b)
Chiedete all'utente di inserire tre interi


#include <stdio.h>

int main (void) 
{
    // inserire tre interi
    printf("%s","Inserisci tre interi :");
}
*****************/
/********** c),d),e),f)
 Definite la variabile x, y e z di tipo int e inizializzatele a 0.
 Poi leggete tre interi da tastiera e memorizzateli nelle variabili x,y e z.
 
 g),h) Definite la variabile result, calcolate il prodotto degli interi nelle variabili x,y e z 
 quindi utilizzate il risultato per inizializzare la variabile result.
 Stampate "The product is" seguito dal valore della variabile intera result
 
 
 
 #include <stdio.h>
 
 int main (void) 
 {
     int x=0;
     int y=0;
     int z=0;
     
     int result; // stampa il risultato
     
     printf("%s","Insert three integers :\n");
     scanf("%d%d%d",&x,&y,&z);
     
     result = x * y * z;
     printf("The product is : %d\n", &result);
     
     return 0;
 } // fine del programma
 
 ESERCIZIO_2.6
 
 a)
 #include <stdio.h>
 
 int main (void)
 {
   int number;
   
   printf("%s","Enter the value :");
   scanf("%d",&number);
   
   printf("The value is : %d\n", number);
   
   return 0;
 }// fine del programma

b)

#include <stdio.h>

int main (void)
{
    int number1, number2;
    
    scanf("%d%d", &number1, &number2);
    
    printf("The number1 is : %d\n", number1 );
    printf("The number2 is : %d\n", number2 );
    
    return 0;
    
} // fine del programma
  
c),d)
#include <stdio.h>

int main (void) 
{
    int c;
    
    printf("%s","Enter the C value :");
    scanf("%d", &c);
    
    if ( c < 7 ) 
    {
    printf("%s","C is less than 7");
    } // fine di if
    if ( c >= 7)
    {
    printf("%s","C is greater than or equal to 7");  
    }
    
    return 0;
} // fine del programma

***************/







