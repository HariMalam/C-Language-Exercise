#include <stdio.h>

int main() {
    float meters;
    
    printf("Enter the distance in meters: ");
    scanf("%f", &meters);
    
    float kilometers = meters * 0.001;
    
    printf("%.2f meters is equal to %.2f kilometers.\n", meters, kilometers);
    
    return 0;
}
