/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main(void)
{
    int height, base;
    float ans; /* ans may come in fraction */
    
    printf("Enter height\n");
    scanf("%d",&height);
    printf("Enter base\n");
    scanf("%d",&base);
    
    ans=(height*base)/2;
    
    printf("Area of triangle is %f", ans);
}