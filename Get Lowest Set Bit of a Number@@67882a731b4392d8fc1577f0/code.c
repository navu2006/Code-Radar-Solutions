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