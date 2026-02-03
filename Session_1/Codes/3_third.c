/*
    Input from user (Scanf)
    Ways to take input & print specified output
*/

#include <stdio.h>
int main() {
    int age;
    printf("Enter your age : ");

    // scanf("format specifier", &variable);
    // &variable  --> Address 
    scanf("%d", &age);  

    // printf("My age is 30\n");

    // printf("message");
    // printf("message %format_specifier", variable);

    printf("My age is %d\n", age);
    return 0;
}