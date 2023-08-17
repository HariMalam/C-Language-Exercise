// Write a C program to read weight of item in kilogram from (like 1.5)Kg. and print the output in grams like (1500).
// (1 Kilogram = 1000 grams)

#include <stdio.h>

int main() {
    float kilogram, gram;
    
    printf("Enter the weight in kilograms: ");
    scanf("%f", &kilogram);
    
    gram = kilogram * 1000;
    
    printf("%.2f kilograms is equal to %.2f grams.\n", kilogram, gram);
    
    return 0;
}
