#include <stdio.h>

int main() {
    float pound;
    
    printf("Enter the weight in pounds: ");
    scanf("%f", &pound);
    
    float rupees = pound / 90;
    
    printf("%.2f pounds is equal to %.2f rupees.\n", pound, rupees);
    
    return 0;
}
