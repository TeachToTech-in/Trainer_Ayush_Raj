#include<stdio.h>
#include<math.h>
int main() {

    // input :
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    // length 
    int m = n;

    int len = 0;
    while (m > 0) {
        len++;
        m /= 10;
    }

    int sum = 0;
    m = n;

    while (m > 0) {
        int r = m%10;
        sum += (int)pow(r,len);
        m /= 10;
    }

    if (sum == n) {
        printf("Armstrong Number : ");
    } else {
        printf("Not a Armstrong Number : ");
    }

    return 0;
}