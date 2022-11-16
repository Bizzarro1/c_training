//////////////////////////////       
////////////////////                    
//////////////////        
//////////   
///////
/////////////////////////////////////////////////////////////////////
// ESERCIZIO_ 2.32 (Calcolatore dell'indice di massa corporea) 
// Le formule per calcolare l'indice di massa corporea (BMI) sono:
//        BMI = weightInPounds x 703 / heightInInches x heightInInches
//
//                                     oppure
//
//        BMI = weightInKilograms / heightInMeters x heightInMeters
//
// Create un'applicazione che sia un calcolatore BMI che legga il peso dell'utente in libbre 
// e l'altezza in pollici 
// (o, se preferite, il peso dell'utente in kilogrammi e l'altezza in metri), 
// poi calcolate e mostrate l'indice di massa corporea dell'utente. 
// L'applicazione deve anche mostrare le seguenti informazioni 
// tratte dal Departement of Health and Human Services/ National Institutes of Health,
// così che l'utente possa valutare.
// @https://www.nhlbi.nih.gov/health/educational/lose_wt/BMI/bmi-m.htm
/////////////////////////////////////////////////////////////////////
////////////////


#include <stdio.h>

int main (void) {
     
     float weight,height, BMI;
     
     
     
     printf("%s","Inserisci il tuo peso:");
     scanf("%f", &weight); // unità di misura : Kg
     
     printf("%s","Inserisci la tua altezza:");
     scanf("%f", &height); // unità di misura : metri
     
     BMI = weight / (height * height);
     printf("Your BMI is:%2.2f", BMI);
         if ( BMI < 18.5 )
     {
         printf("%s","You are underweight\n");
     } // fine di if
     if ( BMI >= 18.5 || BMI == 24.9 )
     {
         printf("%s","You have normal weight\n");
     } // fine di if
     if ( BMI >= 25.0 || BMI == 29.9 )
     {
         printf("%s","You are overweight\n");
     } // fine di if
     if ( BMI > 30 ) 
     {
         printf("%s","Obesity\n");
     }
     
     printf("%s","\nBMI_Categories:\n");
     printf("%s","Underweight = < 18.5\n");
     printf("%s","Normal weight = 18.5-24.9\n");
     printf("%s","Overweight = 25-29.9\n");
     printf("%s","Obesity = BMI of 30 or greater");
     
     return 0;
} // fine del programma
