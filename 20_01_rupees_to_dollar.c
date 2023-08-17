#include <stdio.h>

int main() {
    float dollar, rupees;
    
    printf("Enter the amount in dollars: ");
    scanf("%f", &rupees);
    
    dollar = rupees / 45;
    
    printf("%.2f rupees is equal to %.2f dollar.\n", rupees, dollar);
    
    return 0;
}
