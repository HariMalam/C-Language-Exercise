// Write a C Program to accept any number and print its square and cube.

#include <stdio.h>

int main() {
    float num;
    
    printf("Enter a number: ");
    scanf("%f", &num);
    
    printf("Square: %.2f\n", num * num);
    printf("Cube: %.2f\n", num * num * num);
    
    return 0;
}
