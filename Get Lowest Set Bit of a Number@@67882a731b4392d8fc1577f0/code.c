#include <stdio.h>

int findLowestSetBitPosition(unsigned int num) {
    if (num == 0) {
        return -1; // If the number is 0, there is no set bit
    }

    int position = 0;
    while ((num & 1) == 0) {
        num >>= 1;  // Right shift the number to check the next bit
        position++;  // Increment position
    }
    return position;  // Return the position of the lowest set bit
}

int main() {
    unsigned int num;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%u", &num);

    // Find the position of the lowest set bit
    int position = findLowestSetBitPosition(num);

    if (position == -1) {
        printf("No set bits found in the number.\n");
    } else {
        printf("The position of the lowest set bit is: %d\n", position);
    }

    return 0;
}
