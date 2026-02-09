#include<stdio.h>

int main() {

    int a, b, c;

    printf("Enter number1 : ");
    scanf("%d", &a);

    printf("Enter number2 : ");
    scanf("%d", &b);

    printf("Enter number3 : ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("Greatest number is %d", a);
    }
    else if (b > a && b > c) {
        printf("Greatest number is %d", b);
    }
    else if (c > a && c > b) {
        printf("Greatest number is %d", c);
    }
    else {
        printf("All numbers are equal or two numbers are equal");
    }

    return 0;
}
