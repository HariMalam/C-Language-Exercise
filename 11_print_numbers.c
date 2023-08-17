// write a program that will read two numeric values & print those values

#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter the first numeric value: ");
    scanf("%d", &num1);
    
    printf("Enter the second numeric value: ");
    scanf("%d", &num2);
    
    printf("First value: %d\n", num1);
    printf("Second value: %d\n", num2);
    
    return 0;
}
