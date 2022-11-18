/******************************************************************************

                           ESERCIZIO 3.26 (Velocità computer)
                           
                           Posso eseguire su terminale e vedere quanto tempo impiega l'operazione
                       
                           

*******************************************************************************/


#include <stdio.h>
int main(void)
{
   int count = 1; // contatore

   while(count <= 1000000000) {
if (count % 100000000 == 0) { // resto zero chiaramente quando sarà un multiplo
printf("Multiple is %d\n", count / 100000000);
} // fine di if
      ++count; // incrementa count
   } // fine di while
} // fine del programma