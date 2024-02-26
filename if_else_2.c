#include <stdio.h>
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d", &number);

    if (number >= 0)

    {
        printf("positive\n");
        if (number % 2 == 0)
        {
            printf("even number\n");
        }
        else
        {
            printf("odd number\n");
        }
    }
    else
    {
        printf("negative\n");
        if (number % 2 == 0)
        {
            printf("even number\n");
        }
        else
        {
            printf("odd number\n");
        }
    }

    return 0;
}