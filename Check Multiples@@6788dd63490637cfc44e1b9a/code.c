#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // Check if 'a' is a multiple of 'b'
    if (b != 0 && a % b == 0) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
