#include <stdio.h>

int main() {
    int n, num, min, max;

    printf("Enter count: ");
    scanf("%d", &n);

    printf("Enter number: ");
    scanf("%d", &num);
    min = max = num;  

    while (--n) {
        printf("Enter number: ");
        scanf("%d", &num);
        if (num < min) min = num;
        if (num > max) max = num;
    }

    printf("Min: %d\nMax: %d\n", min, max);
    return 0;
}
