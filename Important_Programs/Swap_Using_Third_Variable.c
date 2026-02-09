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

    // Using + and - operator
    a = a + b; // 3 + 4 = 7
    b = a - b; // 7 - 4 = 3
    a = a - b; // 7 - 3 = 4

    // Using * and / operator
    a = a * b; // 3 * 4 = 12
    b = a / b; // 12 / 4 = 3
    a = a / b; // 12 / 3 = 4



    //printf("Before swapping : a = %d, b = %d", a, b);
    
    
    // printf("\nAfter swapping : a = %d, b = %d", a, b);
    return 0;
}