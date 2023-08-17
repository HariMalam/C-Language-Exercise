// Write a C program to get two values and display addition, substraction, Multiplication and division.

#include <stdio.h>

int main() {
    float num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    
    printf("Addition: %.2f\n", num1 + num2);
    printf("Subtraction: %.2f\n", num1 - num2);
    printf("Multiplication: %.2f\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Division: %.2f\n", num1 / num2);
    } else {
        printf("Cannot divide by zero.\n");
    }
    
    return 0;
}
