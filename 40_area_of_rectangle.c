// Write a C Program that will obtain the length, breadth, and height of a rectangle from the user and calculate area of rectangle.
// (area = lbh)

#include <stdio.h>

int main() {
    float length, breadth, area;
    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    
    area = length * breadth;
    
    printf("Area of the rectangle: %.2f\n", area);
    
    return 0;
}
