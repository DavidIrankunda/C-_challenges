#include <stdio.h>


int calculateSocialSecurityTax(int grossSalary) {
    return grossSalary * 0.05;
}

int main() {
    int grossSalary;
   
    printf("Enter the gross salary of the employee: ");

   
    scanf("%d", &grossSalary);


    int taxAmount = calculateSocialSecurityTax(grossSalary);

    
    printf("The Social Security tax amount to be deducted is: $%d", taxAmount);

    
    return 0;
}