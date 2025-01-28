#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a); 
    // Check if either 'a' is non-zero or 'b' is greater than 0
    if (!(a > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
