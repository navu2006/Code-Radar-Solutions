#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    } else (ch >= 'a' && ch <= 'z') {
        printf("Lowercase");
    }

    return 0;
}
