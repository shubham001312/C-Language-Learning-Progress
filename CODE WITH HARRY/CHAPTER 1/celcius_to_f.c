#include<stdio.h>
int main(){
    float c,f;
    printf("Temperature reading in celcius: ");
    scanf("%f",&c);
    //convertion part
    f= c*(9.0/5.0)+32 ;
    printf("Temp in faren: %.2f",f);
    return 0;
}