/******************************************************************************
ESERCIZIO 3.21 (Predecrementare e postdecrementare) 
Scrivete un programma che dimostri la differenza tra predecrementare e postincrementare.

*******************************************************************************/

#include <stdio.h>

int main (void)
{
    int a=1;
    
    printf("This is main value: %d\n", a);
    
    --a;
    printf("This is a predecrement so the value now is: %d\n", a);
    a--;
    printf("This is a postdecrement so the value is: %d\n", a);
    
} // fine del programma