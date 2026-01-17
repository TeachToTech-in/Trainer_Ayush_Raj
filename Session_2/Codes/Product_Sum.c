int subtractProductAndSum(int n) {
    int sum = 0;
    int prod = 1;
    int rem;

    while (n > 0) {
        rem = n % 10;   // get last digit
        sum += rem;     // add to sum
        prod *= rem;    // multiply to product
        n /= 10;        // remove last digit
    }

    return prod - sum; // return the difference
}
