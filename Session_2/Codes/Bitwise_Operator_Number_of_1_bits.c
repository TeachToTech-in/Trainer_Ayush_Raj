int getSum(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}
/*
  - a & b computes carry bits

  - a ^ b computes sum without carry

  - carry << 1 shifts carry to the left for next higher bit addition

  - Loop continues until there are no carry bits left (b becomes 0)
*/