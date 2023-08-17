#include <stdio.h>

int main() {
    float dollar;
    
    printf("Enter the amount in dollars: ");
    scanf("%f", &dollar);
    
    
    float pounds = dollar * 2;
    
    printf("%.2f dollars is equal to %.2f pounds.\n", dollar, pounds);
    
    return 0;
}
