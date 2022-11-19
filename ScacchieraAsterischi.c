/******************************************************************************
ESERCIZIO 3.39 (Modello di scacchiera di asterischi)

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int row =0; // contatore delle righe
    // ripeti 8 volte 
    while (row < 8 ) {
        int col = 0; // reimposta il contatore delle colonne
        
        // se la riga è dispari, inizia con uno spazio
        //ricordati che il primo valore riga è zero non 1 !!!!!!!!
        if (row % 2 != 0) {
            printf("%s", " ");
        }
     
     // ripeti 8 volte
     while (col < 8) {
         printf("%s", "* ");
         ++col;
     } // fine while_col
     
     puts(""); // vai alla riga successiva
     ++row;
    } // fine del while_row
}
