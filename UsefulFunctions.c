

/*
Alcune funzioni utili.
Esercizi 3.40-3.44 :
- Multipli di 2 con un ciclo infinito;
- Diametro, circonferenza ed area del cerchio;
- Lati di un triangolo;
- Lati di un triangolo rettangolo;
- Fattoriale.

*/

#include <stdio.h>

int main (void) {

    int multiple = 1;

    while (multiple > 0) {
        multiple *= 2;
        printf("%d", multiple);
    
        puts("");
    }
}

#include <stdio.h>

int main (void) {

    printf("%s", "Enter the radius : "); // imposta la variabile a virgola mobile per il raggio e leggi un valore in input
    float radius; 
    scanf("%f", &radius);

    // calcola e stampa il diametro
    printf("The diameter is %.2f\n", radius * 2);
    // calcola e stampa la circonferenza
    float pi = 3.14159; 
    printf("The circumference is %.2f\n", 2 * pi * radius );
    //calcola e stampa l'area
    printf("The area is %.2f\n", pi * radius * radius);
}

// printf ("%d", 1 + x + y);

#include <stdio.h>

int main (void)
{
    int a, b, c;
    // leggi tre numeri
    printf("%s","Enter three non-zero integers: ");
    scanf("%d%d%d", &a, &b, &c);
    // controlla se la somma di due lati qualsiasi e' piu' piccola del terzo
    // vale per un triangolo qualsiasi
    if (a + b < c)
    {
        puts("The three integer cannot be the side of a triangle");
    } else if (b + c < a) { 
            puts("The three integer cannot be the side of a triangle")
        } else if (c + a < b) {
                puts("The three integer cannot be the side of a triangle");
        } 
        else {
            puts("The three integer cannot be the side of a triangle");
        }
} // fine del programma

#include <stdio.h>

int main (void) {
    int a, b, c;

    printf("%s","Enter three non-zero integers: ");
    scanf("%d%d%d", &a, &b, &c);

    // Usiamo il Teorema di Pitagora
    if ( c * c == a * a + b * b) {
        puts("The three integers are the sides of a right triangle");
    } else if (a * a == b * b + c * c) {
        puts("The three integers are the sides of a right triangle");
    }
    else {
        puts("The three integers are not the sides of a right triangle");
    }
} // fine del programma




