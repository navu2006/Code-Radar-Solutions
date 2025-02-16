#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    scanf("%f", &costPrice);

    scanf("%f", &sellingPrice);

    // Check whether the transaction resulted in profit, loss, or no profit no loss
    if (sellingPrice > costPrice) {
        printf("Profit\n");
    } else if (sellingPrice < costPrice) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
