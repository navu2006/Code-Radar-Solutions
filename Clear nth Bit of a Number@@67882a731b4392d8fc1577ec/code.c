#include <stdio.h>

int main() {
    unsigned int num;
    int n;
    
    // Ask the user to input a number
    scanf("%u", &num);
    
    // Ask the user for the bit position to clear
    scanf("%d", &n);
    
    // Clear the nth bit by directly modifying the number
    num = num & ~(1 << n); // Shift 1 to the nth bit, invert, and use AND to clear
    
    // Output the result
    printf("%u\n", num);
    
    return 0;
}
