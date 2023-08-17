// Write a C Program to accept Kilometer and convert it into meter and centimeter.
// (1KM = 1000 Meter and 1 Meter = 100CM)

#include <stdio.h>

int main() {
    float kilometer, meter, centimeter;
    
    printf("Enter the distance in kilometers: ");
    scanf("%f", &kilometer);
    
    meter = kilometer * 1000;
    centimeter = meter * 100;
    
    printf("%.2f kilometers is equal to %.2f meters and %.2f centimeters.\n", kilometer, meter, centimeter);
    
    return 0;
}
