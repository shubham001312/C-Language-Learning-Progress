#include<stdio.h>
int main(){
    int a,b;
    //a and b represents two side of an rectangle
    printf("Enter the sides respectively a,b: \n");
    scanf("%d %d", &a, &b);
    //calculative part integrated in print function
    printf("AREA OF THE RECTANGLE: %d",a*b);
    return 0;

}