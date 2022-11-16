/******************************************************************************
ESERCIZIO 3.17 (Verifica del limite di credito)

*******************************************************************************/
#include <stdio.h>
int main(void)
{
  int number, saldo, debits, credits, limit, total;
  
  printf("Enter the account's number:\n");
  scanf("%d", &number);
  printf("Enter last ammount:\n");
  scanf("%d", &saldo);
  printf("Enter total debits:\n");
  scanf("%d", &debits);
  printf("Enter total credits:\n");
  scanf("%d", &credits);
  printf("Enter credit limit:\n");
  scanf("%d", &limit);
  
  total = credits + saldo - debits;
  if ( total > limit ) {
      printf("Balance:%d\n", total);
  } // fine di if
  
  else printf("Credit limit exceed\n");
  
} // fine del programma
