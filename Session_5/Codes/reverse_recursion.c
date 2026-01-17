int reverse(int x) {
    int rev = 0;
    while (x != 0) {
        int pop = x % 10;
        x /= 10;
        // check for overflow
        if (rev > 2147483647 / 10 || rev < -2147483648 / 10) return 0;
        rev = rev * 10 + pop;
    }
    return rev;
}
/*
  - Extract last digit using pop = x % 10

  - Remove last digit from x using x /= 10

  - Check for overflow before updating rev

  - Update rev by shifting left and adding pop
*/