#include<stdio.h>
#include<math.h>
int main(){
    float r,h,phi;
    phi= 3.14 ;
    printf("Enter the radius of the circle:");
    scanf("%f", &r);
    printf("Enter the height of the circle:");
    scanf("%f", &h);
    if(h == 0.0){
        //user had a 2d circle
        printf("Area of the given dimenstional circle : %.2f", phi*r*r*2);
    }
    else{
        //user want volume 
        printf("Volume of the given dimentional cylinder : %.2f", phi*h*r*r*2);
    }
return 0;
}