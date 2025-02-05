#include <stdio.h>

int main() {
    int num;

    // Input an integer from the user
    scanf("%d", &num);

    // Check if the most significant bit (MSB) is set
    if (num & 0x80000000) {
        // MSB is set (1)
        printf("Set\n");
    } else {
        // MSB is not set (0)
        printf("Not Set\n");
    }

    return 0;
}
