/******************************************************************************

Operatore '?' 

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

