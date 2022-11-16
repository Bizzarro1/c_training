
///////////////////////////////
////////////////////////
/////////////////
////////////
////////
////
///
//
/////// ESERCIZIO_2.3
//////////////////////////////
/////// a) Definite la variabile number tipo int e inizializzatela a 0.

#include <stdio.h>

int main (void) {
    int number=0;
}

/// b) Chiedete all'utente di inserire un intero. 
///////Terminate il vostro messaggio di richiesta con i due punti (:) 
///////seguiti da uno spazio e lasciate il cursore posizionato dopo lo spazio

#include <stdio.h>

int main (void) {
    int value;
    
    printf("%s","Value :","%d");
    scanf("%d", &value);
}

///////////////// c) Leggete un intero da tastiera e memorizzate il valore in una variabile intera a.

#include<stdio.h>

int main(void) {
    int a;
    
    printf("%s","a","%d");
    scanf("%d", &a);
}

//////////// d) Se number non è uguale a 7 stampate "number is not equal to 7"

#include <stdio.h>

int main (void) {
    int number;
    
    printf("%s","Number :","%d");
    scanf("%d", &number);
    
    if (number != 7) {
        printf("%s","number is not equal to 7\n");
    }
}

/////////// e) Stampate "This is a C program" su una riga

#include <stdio.h>

int main (void) {
    printf("%s","This is a C program");
}

////// f) Stampate "This is a C program" su due righe in modo che la prima riga termini con con C 

#include <stdio.h>

int main (void) {
    printf("%s","This is a C\n program");
}

//////////////////////// g) Stampate "This is a C program" con ogni parola su una riga separata

#include <stdio.h>

int main (void) {
    printf("%s","This\n is\n a\n C\n program");
}

/////////// h) Stampate "This is a C program" con le parole separate da tabulazioni

#include <stdio.h>

int main (void) {
    printf("%s","This\t is \t a\t C\t program\t");
}
