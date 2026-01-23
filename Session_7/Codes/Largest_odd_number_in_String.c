char* largestOddNumber(char* num) {
    int i = 0;

    while (num[i] != '\0') i++;
    i--;

    while (i >= 0) {
        int digit = num[i] - '0';
        if (digit % 2 == 1) {
            num[i + 1] = '\0';
            return num;
        }
        i--;
    }

    return "";
}
