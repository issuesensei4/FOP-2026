#include <stdio.h>

/*
 * Assignment 19: Employee Management System
 * This program manages employee records using structures and provides:
 * a) Total employee count
 * b) Gender-based employee statistics
 * c) List of high-earning employees (salary > $10,000)
 * Demonstrates structure usage, array of structures, and function decomposition.
 */

struct EMPLOYEE
{
    char name[50];
    char designation[50];
    char gender;
    int joinDay;
    int joinMonth;
    int joinYear;
    double salary;
};

// a) Function to print total employees
void printTotalEmployees(int count)
{
    printf("Total Employees in Organization: %d\n", count);
}

// b) Function to count male and female employees
void countByGender(struct EMPLOYEE list[], int count)
{
    int maleCount = 0;
    int femaleCount = 0;

    for (int i = 0; i < count; i++)
    {
        if (list[i].gender == 'M')
        {
            maleCount++;
        }
        else if (list[i].gender == 'F')
        {
            femaleCount++;
        }
    }

    printf("Total Male Employees: %d\n", maleCount);
    printf("Total Female Employees: %d\n", femaleCount);
}

// c) Function to display employees earning more than 10,000
void displayHighEarners(struct EMPLOYEE list[], int count)
{
    printf("\n--- Employees earning more than $10,000 ---\n");

    for (int i = 0; i < count; i++)
    {
        if (list[i].salary > 10000.0)
        {
            printf("%s (%s) - Salary: $%.2f\n",
                   list[i].name,
                   list[i].designation,
                   list[i].salary);
        }
    }
}

int main()
{
    struct EMPLOYEE myCompany[4] = {
        {"Alice Smith", "Manager", 'F', 15, 3, 2020, 12500.50},
        {"Bob Jones", "Analyst", 'M', 10, 6, 2021, 8500.00},
        {"Charlie Brown", "Developer", 'M', 1, 11, 2019, 11000.00},
        {"Diana Prince", "Director", 'F', 5, 1, 2018, 25000.00}};

    int totalCount = 4;

    printTotalEmployees(totalCount);

    printf("\n--- Gender Breakdown ---\n");
    countByGender(myCompany, totalCount);

    displayHighEarners(myCompany, totalCount);

    return 0;
}