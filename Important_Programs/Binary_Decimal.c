#include<stdio.h>
#include<math.h>
int main() {

    // input :
    int n;
    printf("Enter a Binary number : ");
    scanf("%d", &n);

    int i = 0;
    int Decimal = 0;
    int m = n;
    int two = 1;

    while (m > 0) {
        int bit = m%10;
        Decimal += bit * two;
        i++;
        two *= 2;
        m /= 10;
    }

    printf("%d",Decimal);

    return 0;
}