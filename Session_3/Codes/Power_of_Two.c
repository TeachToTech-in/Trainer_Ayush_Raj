#include <stdbool.h>

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;       // negative numbers and zero are not powers of two
    return (n & (n - 1)) == 0;      // bitwise check
}
/*
  - n <= 0 → negative numbers and zero are not powers of two

  - (n & (n - 1)) == 0 → bitwise check to determine if n is a power of two
*/