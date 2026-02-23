#include<stdio.h>
int main() {

    // input :
    int n;
    printf("Enter a decimal number : ");
    scanf("%d", &n);

    // Decimal -> Binary
    int Binary = 0;
    int place = 1;

    int m = n; 
    while (m > 0) {
        int r = m%2;
        Binary = Binary + r*place;
        place = place*10;
        m = m/2;
    }

    printf("%d",Binary);

    return 0;
}