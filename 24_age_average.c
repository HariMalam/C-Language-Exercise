// input the ages of three students and print their average. with suitable message.
// Hint : The average could be a decimal.

#include <stdio.h>

int main() {
    int age1, age2, age3;
    
    printf("Enter ages of three students: ");
    scanf("%d %d %d", &age1, &age2, &age3);
    
    float average = (age1 + age2 + age3) / 3.0;
    
    printf("Average age: %.2f\n", average);
    
    return 0;
}
