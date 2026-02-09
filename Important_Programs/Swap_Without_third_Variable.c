#include<stdio.h>
int main() {

    /*
         a = 4
         b = 3
         take help of another variable 

         perform :
         a = 3
         b = 4
    */

    int a = 3;   // 3
    int b = 4;   // 4
    
    printf("Before swapping : a = %d, b = %d", a, b);
    int temp = a; // 3
    a = b;        // 4
    b = temp;     // 3
    
    printf("\nAfter swapping : a = %d, b = %d", a, b);
    return 0;
}