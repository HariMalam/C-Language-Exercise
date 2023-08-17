// write a C program to get Base Salary and quantity and price of an item sold. calculate bonus 12.5% of total amout, calculate commisssion of 8.5% and also calculate gross salary.
// Gross Salary = Base Salary + Bonus + Commission

#include <stdio.h>

int main() {
    float base_salary, quantity, price_per_item, bonus, commission, gross_salary;
    
    printf("Enter the base salary: ");
    scanf("%f", &base_salary);
    
    printf("Enter the quantity sold: ");
    scanf("%f", &quantity);
    
    printf("Enter the price per item: ");
    scanf("%f", &price_per_item);
    
    
    bonus = (12.5 / 100) * base_salary;
    commission = (8.5 / 100) * (quantity * price_per_item);
    
    gross_salary = base_salary + bonus + commission;
    
    printf("Gross Salary: %.2f\n", gross_salary);
    
    return 0;
}
