#include <stdio.h>

int main() {
    float paise, rupees;
    
    printf("Enter the amount in paise: ");
    scanf("%f", &paise);
    
    rupees = paise / 100;
    
    printf("%.2f paise is equal to %.2f rupees.\n", paise, rupees);
    
    return 0;
}
