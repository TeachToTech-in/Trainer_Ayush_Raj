#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}

/*
  - year % 4 == 0 && year % 100 != 0 → divisible by 4 but not by 100

  - year % 400 == 0 → divisible by 400 (century leap year)

  - || combines the two conditions: if either is true, it’s a leap year

  - Else → not a leap year
*/