/*************************************************
 
ESERCIZIO 4.16 (Programma che stampa triangoli)
 
 **************************************************/

#include <stdio.h>

int main (void) {
    
    // figura A, ripeti 10 volte per le righe
    for (unsigned int row = 1; row <= 10; ++row) {
        // stampa gli asterischi delle righe
        for (unsigned int col = 1; col <= row; ++col) {
            printf("%s","*");
        }
        puts("");
    }
    
    puts("");
    
    // figura B, ripeti 10 volte per le righe
    // ciclo di decremento di row per corrispondere al numero di asterischi
    
    for (unsigned int row = 10; row >= 1; --row) {
        
        // stampa gli asterischi delle righe
        for (unsigned int col = 1; col <= row; ++col) {
            printf("%s","*");
        }
        puts("");
    }
    puts("");
    
    // figura C, ripeti 10 volte per le righe
    // ciclo di decremento di row per corrispondere al numero di asterischi
    
    for (unsigned int row = 10; row >= 1; --row) {
        
        // stampa (10-row) spazi
        for (unsigned int space = 1; space <= 10 - row; ++space) {
            printf("%s", "*");
        }
        puts("");
    }
    puts("");
    
    // figura D, ripeti 10 volte per le righe
    for ( unsigned int row = 1; row <= 10 ; ++row) {
        
        // stampa (10-row) spazi
        for (unsigned int space = 1; space <= 10 - row; ++space) {
            
        printf("%s"," ");
        }
    
    
    // stampa gli asterischi delle righe
    for (unsigned int col = 1; col <= row; ++col) {
        printf("%s","*");
    }
    
    puts("");
}
puts("");
} // fine del Programma




