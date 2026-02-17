#include<stdio.h>
int main() {

    /*
    for(init; condition; updation) {

    }
    */

    // for (int i = 1; i <= 10; i++) {
    //     printf("Sorry\n");
    // }


    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);


    // for (int i = 1; i <= n; i++) {
    //     printf("%d\n", i);
    // }

    // for (int i = n; i >= 1; i--) {
    //     printf("%d\n", i);
    // }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
        // sum = 0 + 1 = 1;   i = 1
        // sum = 1 + 2 = 3;   i = 2
        // sum = 3 + 3 = 6;   i = 3
    }

    printf("Sum using loop = %d\n", sum);

    int sum2 = n*(n+1)/2;
    printf("Sum using formula = %d\n", sum2);
    return 0;
}