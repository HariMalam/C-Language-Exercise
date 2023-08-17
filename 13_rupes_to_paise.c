// Write a C program to accept Rupees and conver it into paise (1 Rupees = 100 Paise)

#include <stdio.h>

int main() {
    float rupees, paise;
    
    printf("Enter the amount in rupees: ");
    scanf("%f", &rupees);
    
    paise = rupees * 100;
    
    printf("%.2f rupees is equal to %.2f paise.\n", rupees, paise);
    
    return 0;
}
