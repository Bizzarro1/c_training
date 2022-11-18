/******************************************************************************

                           ESERCIZIO 3.33 (Quadrato di asterischi vuoto)
                           

*******************************************************************************/

#include <stdio.h>

int main(void) 
{
    printf("%s", "Enter the square side: "); // richiedi la lunghezza del lato
    int side; // lunghezza del lato
    scanf("%d", &side);
    
    
    int colPosition = side; // imposta il contatore della dimensione alla lunghezza del 
    
    // ripeti side volte
    while (colPosition > 0 ) {
        int rowPosition = side; // imposta il contatore delle righe alla lunghezza del lato
        
      // ripeti rowPosition volte
      while (rowPosition > 0) {
        // se il contatore della dimensione o il contatore delle righe è pari a 1 
        // oppure alla dimensione del lato stampa "*"
        if (colPosition == side) {
            printf("%s", "*");
        }
        else if (colPosition == 1) {
            printf("%s", "*");
        }
        else if (rowPosition ==1 ) {
            printf("%s", "*");
        }
        else if (rowPosition == side) {
            printf("%s", "*");
        }
        else { // altrimenti, stampa uno spazio
        printf("%s", " ");
        }
        
        --rowPosition; // decrementa il contatore delle righe
        } // fine di while-row
        
        puts(""); // nuova riga per la riga successiva
        --colPosition; // decrementa il contatore della dimensione
    } // fine di while-side
    
} // fine del programma
