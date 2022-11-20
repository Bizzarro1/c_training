/*************************************************
 
 
Stampa una tabella di dimensione X Y 
 
 **************************************************/

#include <stdio.h>

int main (void) { 
    int x =0;
    int y =0;
    
    // richiesta per l'input dell'utente
    printf("%s", "Enter two integers in the range 1-20:\n ");
    scanf("%d%d", &x, &y); // legge i valori per x e y
    
    for (int i = 1; i <= y; ++i) { // conta da 1 a y
        for (int j = 1; j <= x; ++j){ // conta da 1 a x
            printf("%s", "@");
        }
        
        puts(""); // inizia una nuova riga
    }
    
    return 0;
} // fine del programma
    




