// Modify the above program to display the two right most digit of the integral part of the inputted number.

#include <stdio.h>

int main() {
    float num;
    
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    
    int integral_part = (int) num;
    int rightmost_two_digits = integral_part % 100;
    
    printf("Rightmost two digits of the integral part: %d\n", rightmost_two_digits);
    
    return 0;
}
