#include<stdio.h>
int main(){
    int i = 0;
    //Problem: Print first 20 natural number using do while loop.Start from 1 upto 20.
    do {
        printf("Natural number count: %d\n",++i);
    } while(i<20);
    return 0;
}
