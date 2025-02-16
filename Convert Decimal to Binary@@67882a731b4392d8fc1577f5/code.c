#include <stdio.h>

void decimalToBinary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        // Shift the bit to the right and check if it's 1 or 0
        printf("%d", (num >> i) & 1);
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
