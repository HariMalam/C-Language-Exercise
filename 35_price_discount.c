// write a C Program to accept sale amount and calculate 7.5% dicount.

#include <stdio.h>

int main() {
    float sale_amount, discount;
    
    printf("Enter the sale amount: ");
    scanf("%f", &sale_amount);

    discount = (7.5 / 100) * sale_amount;
    
    printf("Discount: %.2f\n", discount);
    
    return 0;
}
