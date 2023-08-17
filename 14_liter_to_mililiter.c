// Write a C Program to accept Liter and convert it into MiliLiter.

#include <stdio.h>

int main() {
    float liter, milliliter;
    
    printf("Enter the volume in liters: ");
    scanf("%f", &liter);
    
    milliliter = liter * 1000;
    
    printf("%.2f liters is equal to %.2f milliliters.\n", liter, milliliter);
    
    return 0;
}
