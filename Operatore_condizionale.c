/******************************************************************************

Operatore condizionale '?' 

CONDIZIONE ? CONSEGUENZA (true) : ALTERNATIVA (false)
     

*******************************************************************************/

#include <stdio.h>

int main (void)
{
    int count = 1;
    
    while (count <= 10) {
        puts((count % 2) ? "****" : "++++++++" );
        ++count;
    } // fine di while
    return 0;
} // fine del programma




#include <stdio.h>

int main (void)
{
    int row = 10;
    
    while (row >= 1) {
        int column = 1;
        
        while (column <= 10) {
            printf("%s", (row % 2) ? "<": ">");
            ++column;
        } 
        --row;
        puts("");
    } // fine del while
} // fine del programma

