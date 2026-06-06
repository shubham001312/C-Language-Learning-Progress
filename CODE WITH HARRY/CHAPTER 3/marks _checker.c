#include<stdio.h>
int main(){
    //intialization
    int student_marks;
    char student_name;
    printf("ENter your obtained marks: ");
    scanf("%d", & student_marks);
    //This is for educational purpose.
    //The bug here is no higher limits of the marks is been seted.
    student_marks<90?(student_marks<80?printf("Bro,You really need to study hard."):printf("Well, you scored a decent mark.")):printf("you secured a star marks,Congratulations.");
    /* This above part seems to be coplex but it is not.
        its just a ternary operation that helps to write a code in more short lines by replacing the if else instruction*/
    return 0;
}