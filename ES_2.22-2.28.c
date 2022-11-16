/******************************************************************************

ESERCIZIO 2.22 (Pari e Dispari)
Scrivete un programma che legga un intero e determini e stampi se sia pari o dispari.
Usate l'operatore di resto. Un numero pari è multiplo di due. 
Qualsiasi multiplo di due lascia un resto di zero quando è diviso per due.



#include <stdio.h>

int main (void)
{
    int a=0;
    
    while ( a != -1 ) {
      
        printf("\nInserisci un numero : \n");
    scanf("%d", &a);  
    
    if ( a%2 == a ) // se pari a % 2 == 0
    {
        printf("%s","Il numero è pari.\n");
    } // fine di if
    
    else 
    {
        printf("%s", "Il numero è dispari.\n");
    } // fine di else
    
    } // fine di while
    
    return 0;
} // fine del programma

/*

Inserisci un numero : 
7
Il numero è dispari.

Inserisci un numero : 
4
Il numero è dispari.

Inserisci un numero : 
0
Il numero è pari.
*/

/*
ESERCIZIO 2.23 (Multipli) Scrivete un programma che legga due interi e 
determini e stampi se il primo è un multiplo del secondo. Usate l'operatore di resto.
*/
/*
#include <stdio.h>

int main (void)
{
    int a=0, b=0;
    
    printf("%s","Insert first number :\n");
    scanf("%d", &a);
    printf("%s","Insert second number :\n");
    scanf("%d", &b);
    
    if ( a%b == 0 )
    {
        printf("%d is multiple of %d.\n", a,b);
    } // fine di if
    
    else printf("%d is not multiple %d.\n", a,b);    
    
    return 0;
} // fine del programma

Insert first number :
45
Insert second number :
5
45 is multiple of 5.
*/
/******************
 ESERCIZIO 2.24 Distinguete tra i termini errore fatale (o irreversibile) ed errore non fatale (non irreversibile).
 Perchè potreste preferire di incorrere in un errore fatale piuttosto che in un errore non fatale ?
 
 Un errore logico irreversibile, o fatale, fa si che il programma fallisca e termini prematuramente. 
 Un errore logico reversibile permette al programma di continuare l'esecuzione ma fa produrre risultati scorretti.
 E' preferibile il primo perchè è meglio avere un problema ben visibile, piuttosto che un problema invisibile.


ESERCIZIO 2.25 (Valore intero di un carattere)
Scrivete un programma in C che stampi gli equivalenti interi di alcune lettere maiuscole, minuscole,
di alcune cifre e simboli speciali. Determinate almeno gli equivalenti interi dei seguenti caratteri:
A B C a b c 0 1 2 $ * + /

**********//////
/*

#include <stdio.h>

int main( void )
{
printf( "A's integer equivalent is %d\n", 'A' );
printf( "B's integer equivalent is %d\n", 'B' );
printf( "C's integer equivalent is %d\n", 'C' );
printf( "a's integer equivalent is %d\n", 'a' );
printf( "b's integer equivalent is %d\n", 'b' );
printf( "c's integer equivalent is %d\n", 'c' );
printf( "0's integer equivalent is %d\n", '0' );
printf( "1's integer equivalent is %d\n", '1' );
printf( "2's integer equivalent is %d\n", '2' );
printf( "$'s integer equivalent is %d\n", '$' );
printf( "*'s integer equivalent is %d\n", '*' );
printf( "+'s integer equivalent is %d\n", '+' );
printf( "/'s integer equivalent is %d\n", '/' );
printf( "The blank character’s integer equivalent is %d\n", ' ' );

    return 0;
} // fine del programma

A's integer equivalent is 65
B's integer equivalent is 66
C's integer equivalent is 67
a's integer equivalent is 97
b's integer equivalent is 98
c's integer equivalent is 99
0's integer equivalent is 48
1's integer equivalent is 49
2's integer equivalent is 50
$'s integer equivalent is 36
*'s integer equivalent is 42
+'s integer equivalent is 43
/'s integer equivalent is 47
The blank character’s integer equivalent is 32

*/
/*
ESERCIZIO 2.28 (Calcolare la frequenza cardiaca)
Mentre fate esercizi fisici, potete usare un cardiofrequenzimetro per calcolare se la vostra frequenza cardiaca
sia entro un livello di sicurezza indicato dai vostri istruttori e medici. 
Secondo l'American Heart Association (AHA) (http://bit.ly/AHATargetHeartRates), 
la formula per calcolare la vostra massima frequenza cardiaca in battiti al minuto è 220 meno la vostra età.
La frequenza cardiaca ideale durante l'allenamento dovrebbe essere il 50-85% della massima frequenza cardiaca.
Scrivete un programma che richieda e legga l'età dell'utente e poi calcoli e visualizzi 
la massima frequenza cardiaca dell'utente e l'intervallo della frequenza cardiaca ideale dell'utente.
[Queste formule sono stime fornite dall'AHA; la frequenza cardiaca massima e quella sotto sforzo possono variare
in base allo stato di salute, alla forma fisica ed al genere di individuo. 
Prima di iniziare o modificare un programma di allenamento 
è sempre bene consultare un medico o un operatore sanitario qualificato]

********/
/*

#include <stdio.h>
#include <math.h>

int main (void)
{
    int freq_max=0, freq_ideal, age;
    float freq_ideal_min, freq_ideal_max;
    
    printf("%s","Let's calculate your max cardiac frequency.\n");
    printf("%s","Insert your age: \n");   // chiedi e leggi l'età dell'utente
    scanf("%d", &age);
    
        freq_max = 220 - age; // calcola e visualizza freq_max
        printf("Your max cardiac frequency is: %d.\n", freq_max);
   
       
        // calcola e visualizza freq_ideal min e max
        freq_ideal_min = (50 * freq_max)/100;
        freq_ideal_max = (85 * freq_max)/100;
        printf("Your ideal frequency is from\n %2.4f\n to\n %2.4f.", freq_ideal_min, freq_ideal_max);
        
    
    return 0;
} // fine del programma
 
Let's calculate your max cardiac frequency.
Insert your age: 
45
Your max cardiac frequency is: 175.
Your ideal frequency is from
 87.0000
 to
 148.0000.
 
 */
 

  







