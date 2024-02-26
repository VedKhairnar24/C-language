#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value for a:");
    scanf("%d",&a);

    printf("enter the value for b:");
    scanf("%d", &b);
    printf("\n%dvalue is not equal:",a!=b);             //not equal to
    printf("\n%dvalue is equal :",a==b);           //equal to
    printf("\n%dvalue is greater then a :",a<b);            //greater then  
    printf("\n%dvalue is less then a:",a>b);            //less then 
    printf("\n%dvalue is less then equal to a:",a>=b);           // less then equal to
    printf("\n%dvalue is greater then equal to a:",a<=b);           //greater then eqyal to
    return 0;
}
