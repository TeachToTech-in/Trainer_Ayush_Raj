#include <string.h>
#include <stdbool.h>

bool rotateString(char* s, char* goal) {
    int n = strlen(s);
    int m = strlen(goal);

    if (n != m) return false;

    char temp[2 * n + 1];
    strcpy(temp, s);
    strcat(temp, s);

    return strstr(temp, goal) != NULL;
}
