/******************************************************************************

                          Serie di asterischi.
                          Stampane 10 e vai a capo. 
                       
                           

*******************************************************************************/


#include <stdio.h>
int main(void)
{
   int count = 0; // contatore
  
   while(++count <= 100) {
// stampa una nuova riga dopo ogni decimo asterisco
// uso l'operatore condizionale
count % 10 == 0 ? printf("%s", "*\n") : printf("%s", "*"); }

} // fine del programma 