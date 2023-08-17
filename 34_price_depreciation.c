// Write a C program to accept price of an item and calculate 23% depreciation.

#include <stdio.h>

int main() {
    float price, depreciation;
    
    printf("Enter the price of the item: ");
    scanf("%f", &price);

    
    depreciation = (23 / 100) * price;
    
    printf("Depreciation: %.2f\n", depreciation);
    
    return 0;
}
