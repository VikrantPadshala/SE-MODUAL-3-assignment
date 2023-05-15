#include <stdio.h>

int main() 
{
    int number, maxDigit = 0; // Declare variables to store the number and the maximum digit
    printf("Enter a number: ");
    scanf("%d", &number); // Read the number from the user

    number = abs(number); // Convert the number to its absolute value to handle negative numbers

    while (number > 0) 
	{
        int digit = number % 10; // Get the last digit of the number

        if (digit > maxDigit) 
		{
            maxDigit = digit; // Update the maximum digit if a larger digit is found
        }

        number /= 10; // Remove the last digit from the number
    }

    printf("Max digit is: %d\n", maxDigit); // Print the maximum digit

    return 0;
}

