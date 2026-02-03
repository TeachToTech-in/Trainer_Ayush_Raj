#include<stdio.h>
int main() {
    /*
       name 
       age
       year
       sem
    */

    int age, year, sem;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your year\n");
    scanf("%d", &year);

    printf("Enter your sem\n");
    scanf("%d", &sem);

    printf("My Name is Ayush Raj\n");
    printf("Age: %d\nYear: %d,\nSem: %d\n", age, year, sem);

    return 0;
}