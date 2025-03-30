#include<stdio.h>

int main() {
    int n, i = 2, isPrime = 1;  // Assume the number is prime initially
    scanf("%d", &n);  // Read the number
    
    // Edge case: Numbers less than 2 are not prime
    if (n < 2) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to sqrt(n) (optimized way)
        while (i * i <= n) {
            if (n % i == 0) {
                isPrime = 0;  // Found a divisor, so not prime
                break;
            }
            i++;
        }
    }
    
    // Print the result: 1 for prime, 0 for not prime
    printf("%d", isPrime);
    return 0;
}
