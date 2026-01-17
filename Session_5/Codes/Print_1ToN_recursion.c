#include <stdio.h>

void printNumbers(int n) {
    if (n == 0) {
        return; // base case: stop recursion
    }
    printNumbers(n - 1); // recursive call
    printf("%d ", n);    // print number after returning from recursion
}

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);

    printf("Numbers from 1 to %d: ", N);
    printNumbers(N);
    printf("\n");

    return 0;
}
