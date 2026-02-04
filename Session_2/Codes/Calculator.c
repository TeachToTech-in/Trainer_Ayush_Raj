#include<stdio.h>
int main() {

    int a;
    int b;

    printf("Enter 1st number : ");
    scanf("%d",&a);

    printf("Enter 2nd number : ");
    scanf("%d",&b);

    // Hum log yaha Addition kar rhe hai : 
    int sum = a + b;

    // Hum log yaha sub kar rhe hai : 
    int sub = a - b;

    // hum div kar rhe hai :
    int div = a/b;

    // hum mul kar rhe hai : 
    int mul = a * b;

    // hum modulo kar rhe hai : 
    int mod = a%b;

    printf("sum = %d \nsub = %d \ndiv = %d \nmul = %d \nmod = %d", sum, sub, div, mul, mod);

    return 0;
}






