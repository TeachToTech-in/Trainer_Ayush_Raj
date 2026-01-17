#include <stdio.h>

int main() {
    int n, original, reversed = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n; // store original number

    while (n > 0) {
        rem = n % 10;          // get last digit
        reversed = reversed * 10 + rem; // build reversed number
        n /= 10;               // remove last digit
    }

    // Check if palindrome
    if (original == reversed)
        printf("%d is a palindrome\n", original);
    else
        printf("%d is not a palindrome\n", original);

    return 0;
}
