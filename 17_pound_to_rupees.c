// Write a C program to accept pound and convert it into Rupees (1 Pound = 90 Rupees)

#include <stdio.h>

int main() {
    float pound, rupees;
    
    printf("Enter the weight in pounds: ");
    scanf("%f", &pound);
    
    rupees = pound * 90;
    
    printf("%.2f pounds is equal to %.2f rupees.\n", pound, rupees);
    
    return 0;
}
