// Write a Program to get Fahrenheit and convert it into Celsius.

#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - 32) * 5 / 9;
    
    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);
    
    return 0;
}
