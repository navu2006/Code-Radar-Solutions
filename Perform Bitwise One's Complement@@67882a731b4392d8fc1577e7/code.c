#include <stdio.h>

int main() {
    int num, result;

    // Input an integer from the user
    scanf("%d", &num);

    // Perform bitwise one's complement operation
    result = ~num;

    // Output only the result
    printf("%d\n", result);

    return 0;
}
