/******************************************************************************

                           ESERCIZIO 3.34 (Tester di palindromi)
                           

*******************************************************************************/
#include <stdio.h>

int main (void) {
    
    printf("%s", "Enter a five-digit number: "); // ricevi il numero
    int number; // numero inserito
    scanf("%d", &number);
    
    int temp = number;
    
    // determina la seconda cifra con divisione intera per 10000
    int firstDigit = temp / 10000;
    temp = number % 10000;
    
    // determina la seconda cifra con divisione intera per 1000
    int secondDigit = temp / 1000;
    temp = number % 1000;
    
    // determina la seconda cifra con divisione intera per 100
    int thirdDigit = temp / 100;
    temp = number % 100;
    
    // determina la seconda cifra con divisione intera per 10
    int fourthDigit = temp / 10;
    temp = number % 10;
    
    int fifthDigit = number % 10;    
    
    // se la prima e la quinta cifra sono uguali
    if (firstDigit == fifthDigit) {
        // se la seconda e la quarta cifra sono uguali
        if (secondDigit == fourthDigit) {
            
            // il numero è un palindromo
            printf("%d è un palindrome\n", number);
        }
        else {
            // il numero non è un palindromo
            printf("%d is not a palindrome\n", number);
        }
    }
    else { 
        // il numero non è un palindromo
            printf("%d is not a palindrome\n", number);
    }
} // fine del programma

