#include<stdio.h>
int main() {

    int a, b;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter another number : ");
    scanf("%d", &b);

    // && - And
    // || - Or 
    // == - equals
    // >= 
    // <=
    // != 
    // <
    // >

    if (a > b) {
        printf("The first number is greater");
    } else if (a < b) {
        printf("The second number is greater");
    } else {
        printf("The numbers are equal");
    }

    
    return 0;
}