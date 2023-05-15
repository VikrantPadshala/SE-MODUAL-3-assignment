#include <stdio.h>

int main() 
{
    int choice;
    float num1, num2, result;
    calculator :

    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice>4)
    	{
    		printf("invalid choice\n");
    		goto calculator;
		}

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) 
	{
        case 1: // Addition
            result = num1 + num2;
            break;
        case 2: // Subtraction
            result = num1 - num2;
            break;
        case 3: // Multiplication
            result = num1 * num2;
            break;
        case 4: // Division
            if (num2 == 0) 
			{
                printf("Error: division by zero.\n");
                return 0;
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: invalid choice.\n");
            return 0;
    }

    printf("Result = %f\n", result);

    return 0;
}

