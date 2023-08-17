// The distance between two cities (in km.) is input throughv the keybord. write a progrma to convert and print this distance in meters, feet, inches and centimeters.
// (1KM = 1000 Meter, 1 Meter = 100CM, 1 Meter = 3.33 Feet, 1 Feet = 12 Inch)

#include <stdio.h>

int main() {
    float distance_km, distance_m, distance_feet, distance_inches, distance_cm;
    
    printf("Enter the distance in kilometers: ");
    scanf("%f", &distance_km);
    
    distance_m = distance_km * 1000;
    distance_cm = distance_m * 100;
    distance_feet = distance_m * 3.33;
    distance_inches = distance_feet * 12;
    
    printf("Distance in meters: %.2f\n", distance_m);
    printf("Distance in centimeters: %.2f\n", distance_cm);
    printf("Distance in feet: %.2f\n", distance_feet);
    printf("Distance in inches: %.2f\n", distance_inches);
    
    return 0;
}
