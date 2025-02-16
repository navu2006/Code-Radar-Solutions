#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    // Check for prime condition
    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
    } else {
        int isPrime = 1;
        for (i = 2; i * i <= n; i++) {  // Check only up to sqrt(n)
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("Prime");
        else
            printf("Not Prime");
    }

    return 0;
}
