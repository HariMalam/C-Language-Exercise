// Write a C program to accept any real number and store it integer part in variable x and fraction in y and display them.
// input : n = 123.75  Output : x = 123 y = 75

#include <stdio.h>

int main() {
    float n;
    int x;
    
    printf("Enter a real number: ");
    scanf("%f", &n);
    
    x = (int) n;
    
    printf("x = %d\n", x);
    printf("y = %d\n", (int) ((n - x) * 100));
    
    return 0;
}
