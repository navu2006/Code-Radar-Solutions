#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    if(n>0) {
        printf("Positive %d",n);
    } else if(n<0) {
        printf("Negative %d",n);
    } else {
        printf("Zero %d",n);
    }
    return 0;
}