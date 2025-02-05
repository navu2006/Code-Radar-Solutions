#include <stdio.h>

int main() {
    int num, n;

    // Input the number and the bit position (n)
    scanf("%d %d", &num, &n);

    // Retrieve the nth bit (right shift by n and AND with 1)
    int bit_value = (num >> n) & 1;

    // Output the value of the nth bit
    printf("%d\n", bit_value);

    return 0;
}
