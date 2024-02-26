//WRITE A PROGRM TO CHECK WHETER THE NUMBER IS EVEN OR ODD?
#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("enter the number :");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);   //IF ANS IS 1 THEN THE NUMBER IS EVEN AND IF ANS IS 0 THE THE NUMBER IS ODD
                                                     
    return 0;
}