#include <stdio.h>

int main() {
    char light;
    printf("Enter traffic light color (R/G/Y): ");
    scanf(" %c", &light);  // space before %c to ignore newline

    switch (light) {
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Wait\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}

/*
  - 'R' → Red light → "Stop"
  - 'G' → Green light → "Go"
  - 'Y' → Yellow light → "Wait"
  - Default case → Invalid input
*/