#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);  
    scanf("%d", &b);  

    // Check if either 'a' is non-zero or 'b' is greater than 0
    if (a > 0 && b < 0 || a && b ==0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
