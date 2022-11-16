/******************************************************************************
Calcolo_carburante

*******************************************************************************/
#include <stdio.h>
int main(void)
{
   int gallons, miles, rate;
    
    printf("Enter the gallons used:\n");
    scanf("%d", &gallons);
    printf("Enter the miles driven:\n");
    scanf("%d", &miles);
    
    rate = miles/gallons;
    printf("The rate for this tank was: %d", rate);
} // fine del programma
