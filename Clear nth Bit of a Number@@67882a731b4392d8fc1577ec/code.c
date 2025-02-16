#include <stdio.h>

int main() {
    unsigned int num;
    int n;
    
    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%u", &num);
    
    // Ask the user for the bit position to clear
    printf("Enter the bit position to clear (0-based index): ");
    scanf("%d", &n);
    
    // Clear the nth bit by directly modifying the number
    num = num & ~(1 << n); // Shift 1 to the nth bit, invert, and use AND to clear
    
    // Output the result
    printf("Number after clearing %d-th bit: %u\n", n, num);
    
    return 0;
}
