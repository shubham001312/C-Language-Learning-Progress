#include<stdio.h>
int main(){
    int dividor=97,divisor;
    printf("Enter the number by which you want to check whether it is divisible by 97: ");
    scanf("%d", &divisor);
    if (dividor % divisor == 0) {
        printf("YES, IT IS DIVISIBLE.\n");
    }
    else {
        printf("NO, IT ISN'T DIVISIBLE.\n");}
    return 0 ;
}