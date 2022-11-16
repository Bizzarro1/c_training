/*
ESERCIZIO 3.24,3.25 (Tabelle output)

#include <stdio.h>

int main (void)
{

printf("N\t10*N\t100*N\t1000*N\n");

for (int counter=1; counter<=10; ++counter) 
{
    printf("%d\t%d\t%d\t%d\t\n", counter, counter*10, counter*100, counter*1000);
} // fine del ciclo

return 0;
} // fine del programma

*/

#include <stdio.h>

int main (void) 
{
    printf("A\tA+2\tA+4\tA+6\n");
    int counter=3; 
    while(counter<=15)
    {
        counter = counter*2;
        printf("%d\t%d\t%d\t%d\t\n", counter, counter+2, counter+4, counter+6);
    } // fine del ciclo
    return 0;
} // fine del programma

