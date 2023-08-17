// Rajesh's basic salary is input through the keybord. 
// His dearness allwance is 40% of basic salary, and house rent allowance is 20% of basic salary.
// write a program to calculate his gross salary.

#include <stdio.h>

int main() {
    float basic_salary, dearness_allowance, house_rent_allowance, gross_salary;
    
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    
    dearness_allowance = 0.4 * basic_salary;
    house_rent_allowance = 0.2 * basic_salary;
    
    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;
    
    printf("Gross Salary: %.2f\n", gross_salary);
    
    return 0;
}
