#include <stdio.h>

int main() {
    int num1, num2, result;

    // Input two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform bitwise OR operation
    result = num1 | num2;

    // Output the result
    printf("%d ", num1, num2, result);

    return 0;
}
