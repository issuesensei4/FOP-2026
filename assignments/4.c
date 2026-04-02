#include <stdio.h>
void main()
{

    float basicPay, hra, ta, grossSalary, professionTax, netSalary;

    printf("Basic Pay: ");
    scanf("%f", &basicPay);

    hra = 0.10 * basicPay;
    ta = 0.05 * basicPay;
    grossSalary = basicPay + hra + ta;
    professionTax = 0.02 * grossSalary;
    netSalary = grossSalary - professionTax;

    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);
}