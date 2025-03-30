#include<stdio.h>

int main() {
    int a;
    int count = 0;
    scanf("%d", &a);  // Read the number
    
    // Handle case where a is less than 2, as numbers less than 2 are not prime
    if (a < 2) {
        printf("0\n");  // Output 0 for non-prime numbers (less than 2)
        return 0;
    }

    // Loop through all numbers from 1 to a to count divisors of 'a'
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }

    // If the count of divisors is exactly 2, it's a prime number
    if (count == 2) {
        printf("1\n");  // Output 1 for prime number
    } else {
        printf("0\n");  // Output 0 for non-prime number
    }

    return 0;
}
