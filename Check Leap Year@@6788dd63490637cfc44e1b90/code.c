#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year\n", year);
    } else {
        printf("Not a Leap Year\n", year);
    }

    return 0;
}
