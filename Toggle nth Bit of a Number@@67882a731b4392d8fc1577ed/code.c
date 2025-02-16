#include <stdio.h>

int main() {
    unsigned int num;
    int n;
    
    // Ask the user to input a number
    scanf("%u", &num);
    
    // Ask the user for the bit position to toggle
    scanf("%d", &n);
    
    // Toggle the nth bit using XOR
    num = num ^ (1 << n);  // Shift 1 to the nth bit and XOR with the number to flip the nth bit
    
    // Output the result
    printf("%u\n", n, num);
    
    return 0;
}
