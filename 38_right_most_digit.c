// Write a C program that reads floating-point number and them display the right most digit of the inegral part of inputted number.

#include <stdio.h>

int main() {
    float num;
    
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    
    int integral_part = (int) num;
    int rightmost_digit = integral_part % 10;
    
    printf("Rightmost digit of the integral part: %d\n", rightmost_digit);
    
    return 0;
}
