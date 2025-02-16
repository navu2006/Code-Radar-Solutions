#include <stdio.h>

void decimalToBinary(unsigned int num) {
    int leadingZeroFlag = 1;  // Flag to track leading zeros
    
    // Special case for 0
    if (num == 0) {
        printf("0");
        return;
    }

    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;

        // Print the first 1 bit (start of significant bits)
        if (bit == 1) {
            leadingZeroFlag = 0;  // Once we print the first 1, we stop skipping leading zeros
        }

        // Print the bit only if it's not a leading zero
        if (!leadingZeroFlag) {
            printf("%d", bit);
        }
    }
}

int main() {
    unsigned int num;

    // Ask the user to input a decimal number
    scanf("%u", &num);

    // Print the binary equivalent
    decimalToBinary(num);
    printf("\n");

    return 0;
}
