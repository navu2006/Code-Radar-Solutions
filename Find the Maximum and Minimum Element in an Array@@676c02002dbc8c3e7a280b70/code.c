#include <stdio.h>

int main() {
    int n, num, min, max;

    scanf("%d", &n);

    scanf("%d", &num);
    min = max = num;  

    while (--n) {
        scanf("%d", &num);
        if (num < min) min = num;
        if (num > max) max = num;
    }

    printf("%d %d", min, max);
    return 0;
}
