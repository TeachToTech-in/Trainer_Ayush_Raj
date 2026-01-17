#include <stdio.h>

int main() {
    int n, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        int rem = n % 10;          // get last digit
        reversed = reversed * 10 + rem; // build reversed number
        n /= 10;               // remove last digit
    }

    printf("%d is the Reversed number\n", reversed);

    return 0;
}
