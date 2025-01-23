#include <stdio.h>

int main() {
    int a,b,c,sum;
    scanf("%d %d %d", &a, &b, &c);
    sum=a+b+c;
    printf("Average: %.2f", sum/3.0);
    return 0;
}