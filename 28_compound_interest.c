// Write a C Program to accept appropriate inputs and calculate compound interest and display it.
// A = P(1+R/100)^N

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compound_interest;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    
    printf("Enter time in years: ");
    scanf("%f", &time);
    
    compound_interest = principal * (pow(1 + rate / 100, time)) - principal;
    
    printf("Compound Interest: %.2f\n", compound_interest);
    
    return 0;
}
