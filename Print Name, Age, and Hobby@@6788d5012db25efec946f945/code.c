#include <stdio.h>

int main() {
    char a[100];
    int b;
    char c[100];
    scanf("%c", &a);
    scanf("%d", &b);
    scanf("%c", &c);
    printf("Name: %s\n", a);
    printf("Age: %d\n", b);
    printf("Hobby: %s\n", c);
    return 0;
}