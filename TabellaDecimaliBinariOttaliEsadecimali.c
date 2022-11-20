
/***************************
 
 
 
 ESERCIZIO 4.25 (Tabella di equivalenza fra decimali, binari, ottali ed esadecimali)
 
 ******************************/

#include <stdio.h>

int main (void) {
    // stampa intestazioni di Tabella
    puts("Decimal\t\tBinary\t\tOctal\t\tHexadecimal"); 
    
    // effettua un'iterazione attraverso i valori da 1 a 256
    for (unsigned int loop = 1; loop <= 256; ++loop) {
        printf("%d\t\t", loop);
        unsigned int number = loop;
        
        // numeri binari
        printf("%c", number == 256 ? '1' : '0');
        
        printf("%c", number < 256 && number >= 128 ? '1' : '0');
        number %= 128;
        
        printf("%c", number < 128 && number >= 64 ? '1' : '0');
        number %= 64;
        
        printf("%c", number < 64 && number >= 32 ? '1' : '0');
        number %= 32;
        
        printf("%c", number < 32 && number >= 16 ? '1' : '0');
        number %= 16;
        
        printf("%c", number < 16 && number >= 8 ? '1' : '0');
        number %= 8;
        
        printf("%c", number < 8 && number >= 4 ? '1' : '0');
        number %= 4;
        
        printf("%c", number < 4 && number >= 2 ? '1' : '0');
        number %= 2;
        
        printf("%c\t", number == 1 ? '1' : '0');
        
        // numeri ottali
        number = loop;
        
        printf("%d", number >= 64 ? number / 64 : 0);
        number %= 64;
        
        printf("%d", number < 64 && number >= 8 ? number / 8 : 0);
        number %= 8;
        
        printf("%d\t\t", number == 0 ? 0 : number);
        
        // numeri esadecimali
        number = loop;
        unsigned int temp1 = 16;
        
        if (number == 256 ) {
            printf("%d", number / 256);
            number %= 16;
        } // fine di if
        
        if (number < 256 && number >= 16 ) {
            temp1 = number / 16;
            number %= 16;
        } // fine di if
        
        // converti in lettera se temp1 e' superiore a 9
        if (temp1 <= 9) {
            printf("%d", temp1);
        } // fine di if
        else if (temp1 >= 10 && temp1 <= 15) {
            printf("%c", 'A' + (temp1 - 10));
        }
        else if (temp1 == 16 ) {
            printf("%s", "0");
        }
        
        // converti in lettera se number è superiore a 9
        if (number <= 9) {
            printf("%d", number);
        } else if (number >= 10 && number <= 15 ) {
            printf("%c", 'A' + (number - 10));
        }
        
        puts("");
    }
    return 0;
} // fine del programma


























