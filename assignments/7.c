#include <stdio.h>

/*
 * Assignment 7: Student Grade Management System
 * This program manages student records using structures, allowing users to:
 */

struct Student
{
    int roll_no;
    char name[50];
    float subject1;
    float subject2;
    float subject3;
    float total;
    float average;
};

int main()
{
    int num_students;

    printf("How many students are in the class? (Max 50): ");
    scanf("%d", &num_students);

    struct Student class_list[50];

    for (int i = 0; i < num_students; i++)
    {
        printf("\n--- Enter details for Student %d ---\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &class_list[i].roll_no);

        printf("First Name: ");
        scanf("%s", class_list[i].name);

        printf("Marks for Subject 1: ");
        scanf("%f", &class_list[i].subject1);

        printf("Marks for Subject 2: ");
        scanf("%f", &class_list[i].subject2);

        printf("Marks for Subject 3: ");
        scanf("%f", &class_list[i].subject3);

        class_list[i].total = class_list[i].subject1 + class_list[i].subject2 + class_list[i].subject3;
        class_list[i].average = class_list[i].total / 3.0;
    }

    printf("\n=======================================================\n");
    printf("                   STUDENT RESULTS                     \n");
    printf("=======================================================\n");
    printf("Roll No\tName\t\tTotal\tAverage\n");
    printf("-------------------------------------------------------\n");

    for (int i = 0; i < num_students; i++)
    {
        printf("%d\t%s\t\t%.2f\t%.2f\n",
               class_list[i].roll_no,
               class_list[i].name,
               class_list[i].total,
               class_list[i].average);
    }

    printf("=======================================================\n");

    return 0;
}