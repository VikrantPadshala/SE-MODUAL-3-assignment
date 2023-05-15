#include <stdio.h>

// Define a structure to store employee information
struct Employee 
{
    int empNo;
    char empName[50];
    char address[100];
    int age;
};

int main() 
{
	int i;
    struct Employee employees[5]; // Declare an array of Employee structures to store information for five employees

    // Read information for each employee
    for (i = 0; i < 5; i++) 
	{
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empNo);
        printf("Employee Name: ");
        scanf("%s", employees[i].empName);
        printf("Address: ");
        scanf("%s", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("\n");
    }

    // Print and display information for each employee
    printf("Employee Information:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("Employee %d\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empNo);
        printf("Employee Name: %s\n", employees[i].empName);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
        printf("\n");
    }

    return 0;
}

