// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int account_number;
    float beginning_balance, total_charges, total_credits, balance, credit_limit;
    
    while ( account_number != -1 )
    {
        printf("%s","Enter account_number : ");
        scanf("%d", &account_number);
        printf("%s","Enter beginning_balance : ");
        scanf("%f", &beginning_balance);
        printf("%s","Enter total_charges : ");
        scanf("%f", &total_charges);
        printf("%s","Enter total_credits : ");
        scanf("%f", &total_credits);
        printf("%s","Enter credit_limit : ");
        scanf("%f", &credit_limit);
        
        printf("Account : %d\n", account_number);
         printf("beginning_balance : %.2f\n", beginning_balance);
          printf(" total_charges: %.2f\n",total_charges );
          printf(" total_credits: %.2f\n",total_credits );
          
          balance = beginning_balance + total_charges - total_credits;
          if (credit_limit <= balance )
          {
              printf("balance is : %.2f\n", balance);
          } // fine di if
          else printf("your balance is : %.2f\n", balance);
    } // fine di while
        
    return 0;
} // fine del programma