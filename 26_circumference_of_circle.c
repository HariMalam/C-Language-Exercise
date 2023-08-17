// Write a C program to get radius and calculate and display the circumference of a circle.
// Circumference = 2πr

#include <stdio.h>

int main() {
    float radius, circumference;
    const float PI = 3.14159;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    circumference = 2 * PI * radius;
    
    printf("Circumference of the circle: %.2f\n", circumference);
    
    return 0;
}
