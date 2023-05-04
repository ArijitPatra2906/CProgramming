/* Chapter 3 - Conditional Statements */

// Write a program to check if a student passed or failed. if marks > 30 is PASS and markes <= 30 is FAIL


// IF-ELSE CONDITION

#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks : ");
    scanf("%d",&marks);
    if(marks > 30) {
        printf("PASS");
    }else{
        printf("FAIL");
    }
    marks > 30 ? printf("Pass") : printf("Fail");
    return 0;
}

// TERNARY OPERATOR

#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks : ");
    scanf("%d",&marks);
    marks > 30 ? printf("Pass") : printf("Fail");
    return 0;
}

//