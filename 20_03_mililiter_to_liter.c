#include <stdio.h>

int main() {
    float liter;
    
    printf("Enter the volume in liters: ");
    scanf("%f", &liter);
    
    
    float milliliters = liter * 0.001;
    
    printf("%.2f liters is equal to %.2f milliliters.\n", liter, milliliters);
    
    return 0;
}
