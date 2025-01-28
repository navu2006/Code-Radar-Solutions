#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a || b > 0) {  // Now it evaluates as (a || (b > 0))
        printf("True");
    } else {
        printf("False");
    }
    
    return 0;
}
