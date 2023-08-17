#include <stdio.h>

int main() {
    float gram;
    
    printf("Enter the weight in grams: ");
    scanf("%f", &gram);
    
    
    float kilograms = gram /1000;
    
    printf("%.2f grams is equal to %.2f kilograms.\n", gram, kilograms);
    
    return 0;
}
