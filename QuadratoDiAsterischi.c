/******************************************************************************
3.32 (Quadrato di asterischi)
     

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y, num;

    printf("Enter the number: ");
    scanf("%d", &num);

    x = 0;
    y = num;

    while (x < num) {
        while (y > 0) {
            printf("****\n");
            --y;
        }
        printf("\n");
        ++x;
    }

    return 0;
} // fine del programma

