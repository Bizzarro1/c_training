/******************************************************************************

                           ESERCIZIO 3.35 (Stampare l'equivalente decimale di un numero binario)
                           

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    // richiesta input binario
    printf("%s", "Enter a binary number (5 digits maximum): ");
    int binary; // valore corrente di un binario
    scanf("%d", &binary);
    
    int number = binary; // salvataggio del numero per stampa finale
    int decimal = 0; // valore corrente di numero decimale
    int highBit = 16; // valore del bit più alto
    int factor = 10000; // fattore di 10 per ottenere le cifre
    
    // ripeti 5 volte usanto potenze di 2
    while (highBit >= 1) {
        
        // aggiorna il valore decimale con il valore decimale corrispondente
        // al bit binario più alto corrente
        decimal += binary / factor * highBit;
        
        // dimezza highBit, cioè si sposta di un bit a destra
        highBit /= 2;
        
        // riduce il numero binario per eliminare il bit corrente più alto 
        binary %= factor;
        
        // riduce factor di una potenza di dieci, cioè si sposta di un bit a destra
        factor /= 10;
    }
    
    // stampa il valore decimale
    printf("The decimal equivalente of %d is %d\n", number, decimal);
} // fine del programma