
#include <stdio.h>
#include <math.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d", &marks);

    if (marks >= 95)
    {
        printf("A++");
    }
    else if (marks > 80 && marks < 95)
    {
        printf("A+");
    }
    else if (marks > 60 && marks < 80)
    {
        printf("B");
    }
    else if (marks > 35 && marks < 60)
    {
        printf("c");
    }
    else
    {
        printf("fail\n");
        printf("try again ");
    }
    return 0;
}