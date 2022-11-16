/////////////////////
//////////////////////////////////
////////////////////////////////////////
/////////

////////////     ESERCIZIO_2.7

//Identificate e correggete gli errori in ciascuna delle seguenti istruzioni.
////////////(Nota: potrebbe esserci più di un errore)

/////////////////////
/************************
 a) 
 
#include <stdio.h>

int main (void) 
{
    int value;
    
    scanf("%d", &value);
    printf("The value is : %d", value);
}

b)

#include <stdio.h>

int main (void) 
{
    int x,y, product;
    
    printf("%s","X :");
    scanf("%d", &x);
    
    printf("%s","Y :");
    scanf("%d", &y);
    
    product = x * y;
    printf("The product is : %d", product);
    
    return 0;

} // fine del programma

c) 

#include <stdio.h>

int main (void)
{
    int num1, num2, sum;
    
    printf("%s","Insert num1 :");
    scanf("%d", &num1);
    printf("%s","Insert num2 :");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    printf("The sum is : %d", sum);
    
    return 0;
} // fine del programma
********/
/********
 * 
 * d)
 * 
#include <stdio.h>

int main (void) 
{
    int number, largest=7;
    
    printf("%s","Insert number :");
    scanf("%d", &number);
    
    if (number > largest) 
    {
        printf("%s","The number is higher the largest");
    } // fine di if
    if (number == largest)
    {
        printf("%s","The number is equal to the largest");
    } // fine di if
    
    return 0;
} // fine del programma

*****/// e)  /////// Programma per il calcolo del maggiore di tre interi /////

/*
#include <stdio.h>

int main (void)
{
    int a, b, c;
    
     printf("%s","Insert a :");
        scanf("%d", &a);
    
    while ( a != -1  ) 
    {
       
         printf("%s","Insert b :");
        scanf("%d", &b);
        
         printf("%s","Insert c :");
        scanf("%d", &c);
    
    if ( a > c && a > b) 
    {
        printf("%s","a is the biggest");
    } // fine di if
    
    if ( b > c && b > a) 
    {
        printf("%s","b is the biggest");
    } // fine di if
    
    else
    {
        printf("%s","c is the biggest\n");
    }
    
    } // fine di while
    
    return 0;
    
} // fine del programma
*/