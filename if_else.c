//WRITE A PROGRAM TO PRINT A AGE and TO CHECK WHETHER IS adult and  ELEGABLE TO DRIVE OR NOT?
#include<stdio.h>
int main(){
    int age;
    printf("enter the age:");
    scanf("%d", &age);

    if (age>18)
    {
    printf("He is adult \n");
    printf("He can drive");
    }
    else{
        printf("not adult \n");
        printf("He canot drive");
    }
    

    return 0;