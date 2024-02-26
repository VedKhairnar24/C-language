//WRITE A PROGRAM TO CHECK IN A WEAK WHICH DAY IS GOING ON
#include<stdio.h>
int main(){
    int day;
    printf("enter the day 1-7:");
    scanf("%d", &day);
    switch (day)
    {
    case 1 : printf("monday");
              break;
    case 2 : printf("tuesday");
              break;
    case 3 : printf("wednesday");
              break;
    case 4 : printf("thusday");
              break;
    case 5 : printf("friday");
              break;
    case 6 : printf("saturday");
              break;
    case 7 : printf("sunday");
              break; 
    default: printf("is not an valid day");
        
    }
    return 0;
} 