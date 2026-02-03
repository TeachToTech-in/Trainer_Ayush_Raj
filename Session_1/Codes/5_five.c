#include<stdio.h>
int main() {
    /*
       name 
       age
       year
       sem
    */

    int a, b;
    printf("Enter first number\n");
    scanf("%d", &a); // vo value address per bhej rha hai

    printf("Enter second number\n");
    scanf("%d", &b);

    int sum = a + b;
    
    printf("Sum of a and b is : %d\n", sum);
    return 0;
}