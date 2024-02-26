#include<stdio.h>
int main() {
    int num1,num2;

    printf("enter the value ");
    scanf("%d", &num1);

    printf("enter the value ");
    scanf("%d", &num2);

    printf("\n%d" ,num1<num2 && num1>num2 ); 
    printf("\n%d", num1<num2 || num1>num2 );
    return 0;

}