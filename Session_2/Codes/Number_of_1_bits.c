int hammingWeight(uint32_t n) {
    int count = 0;
    while (n != 0) {
        count += (n & 1);  // add 1 if the least significant bit is 1
        n >>= 1;           // right‑shift to process the next bit
    }
    return count;
}
/*
  - n & 1 checks if the least significant bit is 1

  - count += (n & 1) increments count if the bit is 1

  - n >>= 1 right-shifts n to process the next bit

  - Loop continues until all bits are processed (n becomes 0)
*/