#include<stdio.h>
int main(){
    int a, b, c;

    printf("Enter number : ");
    scanf_s("%d", &a);

    for (b = 0; b < a; b++)
    {
        if (b == 0 || b == a - 1)
        {
            printf("\t*");
            for (c = 0; c < a - 1; c++)
            {
                printf(" *");
            }
            printf("\n");

            continue;
        }

        printf("\t* ");

        for (c = 0; c < a - 2; c++)
        {
            printf("  ");
        }

        printf("*\n");
    }

    return 0;
}