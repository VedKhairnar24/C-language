//IF A NUMBER IS GREATER THEN 9 & LESS THEN 100 THEN PRINT TRUE ?
#include<stdio.h>
int main(){
    int x;
    printf("enter the number: ");
    scanf("%d", &x);
    printf("%d",(x>9) && (x<100));//if the ans is 1 then it is true and if the ans  is 0 then it will be false
    return 0;
}