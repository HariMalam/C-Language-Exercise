// Write a C program to get appropriate input and calculate simple interest, compound interest and display the difference between them.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simple_interest, compound_interest;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    
    printf("Enter time in years: ");
    scanf("%f", &time);
    
    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * (pow(1 + rate / 100, time)) - principal;
    
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    
    printf("Difference: %.2f\n", compound_interest - simple_interest);
    
    return 0;
}
