#include<stdio.h>
int main() {

    /*

    if (condition) {

    } 
    else {

    }


    if (condition) {
    
    } else if {
    
    } else {
     
    }

    */


    // Write a C program to check whether a given number is positive, negative, or zero.
    /*
    int a = 0;

    if (a > 0) {
        printf("%d is a positive number", a);
    } 
    else if (a < 0) {
        printf("%d is a Negative number", a);
    } 
    else {
        printf("Zero");
    }
    */



    // Write a program to check whether an integer entered by the user is even or odd.'
    
    /*
    int a = 5;

    if (a % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }
    */


    /*
    
    -	Write a program to input marks and print grade:
         90 and above → Grade A
         80 to 89 → Grade B
         60 to 79 → Grade C
         33 to 59 → Grade D
         Below 33 → Fail

    */

    int m;
    printf("Enter marks : ");
    scanf("%d", &m);

    if (m >= 90) {
        printf("Grade A");
    }
    else if (80 <= m && m <= 89) {
        printf("Grade B");
    }
    else if (60 <= m && m <= 79) {
        printf("Grade C");
    }
    else if (33 <= m && m <= 59) {
        printf("Grade D");
    } 
    else {
        printf("Fail");
    }

    return 0;
}