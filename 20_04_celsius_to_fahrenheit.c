#include <stdio.h>

int main() {
    float celsius, fahrenheit_conversion_factor;
    
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    
    
    float fahrenheit = celsius * 33.8;
    
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);
    
    return 0;
}
