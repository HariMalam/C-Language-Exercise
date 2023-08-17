// Write a C program to get Dollar and convert into pounds. (2 Dollar = 1 Pound)

#include <stdio.h>

int main() {
    float dollar, pounds;
    
    printf("Enter the amount in dollars: ");
    scanf("%f", &dollar);
    
    pounds = dollar / 2;
    
    printf("%.2f dollars is equal to %.2f pounds.\n", dollar, pounds);
    
    return 0;
}
