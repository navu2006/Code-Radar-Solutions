#include <stdio.h>

int main() {
    int a,b,c,sum;
    scanf("%f %f %f", &a, &b, &c);
    sum=a+b+c;
    printf("Average: %.2f)", sum/3.0);
    return 0;
}