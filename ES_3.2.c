/******************************************************************************

ESERCIZIO_3.2 Scrivete quattro differenti istruzioni in C che sommino 1 alla variabile intera x.

#include <stdio.h>

int main()
{
    int x=0;
     printf("%d\n", ++x);
    return 0;
}

#include <stdio.h>

int main()
{
    int x=0;
     printf("%d\n", x++);
     printf("%d\n", x);
     
    return 0;
}


#include <stdio.h>

int main()
{
    int x=0;
    
    x = x + 1;
     printf("%d\n", x);
     
    return 0;
}


#include <stdio.h>

int main()
{
    int x=0;
    
    x += 1;
     printf("%d\n", x);
     
    return 0;
}

ESERCIZIO_3.2 Scrivete singole istruzioni in C per effettuare ciascuna delle seguenti azioni
a) Moltiplicare la variabile product per 2 usando l'operatore *=
product *= 2;
b) Moltiplicare la variabile product per 2 usando gli operatori = e *
product = product * 2;
c) Verificate se il valore della variabile count è maggiore di 10. Se lo è, stampate "Count is greater than 10"
#include <stdio.h>

int main()
{
    int count;

    printf("%s","Insert the count :\n");
    scanf("%d", &count);
    
    if ( count > 10) 
    {
        printf("%s","Count is greater than 10\n");
    } // fine di if
     
    return 0;
}
d) Calcolate il resto della divisione di quotient per divisor e assegnate il risultato a quotient. 
Scrivete questa istruzione in due modi differenti.

#include <stdio.h>

int main()
{
    int quotient, divisor;

    printf("%s","Quotient :\n");
    scanf("%d", &quotient);
    printf("%s","Divisor :\n");
    scanf("%d", &divisor);
    
    quotient = quotient%divisor;
    printf("%d", quotient);
     
    return 0;
} // fine del programma



#include <stdio.h>

int main()
{
    int quotient, divisor, rest;

    printf("%s","Quotient :\n");
    scanf("%d", &quotient);
    printf("%s","Divisor :\n");
    scanf("%d", &divisor);
    
    quotient = quotient/divisor;
    printf("Equal to %d\n", quotient);
    
    rest = quotient%divisor;
    printf("The rest is : %d", rest);
     
    return 0;
} // fine del programma

e) Stampate il valore 123.4567 con due cifre di precisione. Quale valore viene stampato ?


#include <stdio.h>

int main (void) 
{
    float a=123.4567;
    
    printf("The value is : %3.2f\n", a);
    
    return 0;
} // fine del programma

The value is : 123.46

f) Stampate il valore del numero in virgola mobile 3.14159 con tre cifre alla destra del numero decimale.
Quale valore viene stampato ?

#include <stdio.h>

int main (void) 
{
    float a=3.14159;
    
    printf("The value is : %.3f\n", a);
    
    return 0;
} // fine del programma

The value is : 3.142

ESERCIZIO_3.4 
a) Definite la variabile x come tipo int ed impostatela a 1
int x=1;
b) Definite la variabile sum come tipo int ed impostatela a 0
int sum=0;
c) Sommate la variabile x alla variabile sum ed assegnate il risultato alla variabile sum
sum = x + sum;
d) Stampate "The sum is :" seguito dal valore della variabile sum
printf("The sum is : %d\n", sum);

ESERCIZIO_3.5 Metti insieme le istruzioni per calcolare la somma di interi da 1 a 10. 
Usate l'istruzione while per iterare i calcoli e le istruzioni di incremento. 
Il ciclo deve terminare quando il valore di x diventa 11.


#include <stdio.h>

int main (void)
{
    int x=1, sum=0;
    
    while ( x <= 10)
    {
      sum = sum + x; // oppure sum += x
      ++x;
    } // fine di while
    
    printf("The sum is : %d\n", sum);
    
    return 0;
} // fine del programma

ESERCIZIO_3.6 
a), b) Leggete il valore della variabile intera x, y con scanf. Usate la specifica di conversione %d.
scanf("%d", &x);
scanf("%d", &y);
c) Imposta il valore della variabile intera i a 1
int i = 1;
d) Imposta la variabile intera power a 1
int power = 1;
e) Moltiplicate la variabile intera power per x e assegnate il risultato a power
power = power * x;
f) Incrementate la variabile i di 1
++i;
g) Testate i per vedere se è minore o uguale a y nella condizione di un'istruzione while
while (i <= y);
h) Stampate la variabile intera power con printf

#include <stdio.h>
int power;
scanf("%d", &power);
printf("%s","Power is : %d\n");

ESERCIZIO_3.7 Scrivete un programma in C per calcolare x elevato alla potenza y. 
Il programma dovrà avere un'istruzione di controllo dell'iterazione while.

#include <stdio.h>
int main (void)
{
    int x=0, y=0, power=1, i=1;
    printf("%s","Enter first integer :\n");
    scanf("%d", &x);
    printf("%s","Enter second integer :\n");
    scanf("%d", &y);
    
    while ( i <= y ) {
        power *= x;
        ++i;
    }
    printf("%d\n", power);
    
    return 0;
} // fine del programma

Enter first integer :
6
Enter second integer :
7
279936
*/





