#include<stdio.h>
int main(){
    float p,r,t,i;
    printf("Enter your loan amount, rate of interest, time period in year repectively: \n");
    scanf("%f %f %f",&p, &r, &t);
    printf("Calculated interest is :%.2f",(p*r*t)/100);
    return 0;
}