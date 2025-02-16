#include <stdio.h>
#include <ctype.h>  // For checking if the character is a digit or letter

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel");
    }
    // Check if the character is a consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant");
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // If none of the above, it's a special character
    else {
        printf("Special Character");
    }

    return 0;
}
