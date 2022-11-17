/******************************************************************************

       ESERCIZIO 3.27 (Convalida input utente) 

*******************************************************************************/
// Analisi dei risultati dell'esame
#include <stdio.h>
// la funzione main inizia l'esecuzione del programma
int main (void) {
    // inizializza le variabili nelle definizioni
    int passes = 0;
    int failures = 0;
    int student = 1;
 
 while (student <= 10) {
     
      printf("%s", "Enter result (1=pass, 2=fail) :  ");
        int result = 0; 
        scanf("%d", &result);
        
     switch (result) {
         
     case 1 :
     ++passes;
     break;
     
     case 2 :
     ++failures;
     break;
     
     default : 
     printf("%s","Incorrect letter grade enterede.");
     printf("\nEnter a new grade.\n");
     break;
     } // fine di switch
        
        student = student + 1;
    } // fine di while
    
    // fase di terminazione, stampa i risultati
    printf("Passed %d\n", passes);
    printf("Failed %d\n", failures);
    
    // se sono stati promossi più di 8 studenti, stampa "Bonus to instructor !"
    if (passes > 8) {
        puts("Bonus to instructor!");
    } // fine di if
    
    return 0;
} // fine della funzione main


