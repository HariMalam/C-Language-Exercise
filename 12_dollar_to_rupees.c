// write a C program to accept Dollar and convert it into Rupees. (1 Dollar = 45 Rupees)

#include <stdio.h>

int main() {
    float dollar, rupees;
    
    printf("Enter the amount in dollars: ");
    scanf("%f", &dollar);
    
    rupees = dollar * 45;
    
    printf("%.2f dollars is equal to %.2f rupees.\n", dollar, rupees);
    
    return 0;
}
