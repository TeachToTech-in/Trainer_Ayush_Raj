#include<stdio.h>
int main() {

    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);

    // print only even numbers : 
    for (int i = 1; i <= n; i++) {
        if (i%2 == 0) {
            printf("%d",i);
        }
    }
    return 0;
}