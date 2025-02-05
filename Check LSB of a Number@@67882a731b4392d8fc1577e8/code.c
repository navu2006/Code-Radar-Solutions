#include <stdio.h>

int main() {
    int num;

    // Input an integer from the user
    scanf("%d", &num);

    // Check if the least significant bit is set
    if (num & 1) {
        // LSB is set (1)
        printf("Set\n");
    } else {
        // LSB is not set (0)
        printf("Not Set\n");
    }

    return 0;
}
