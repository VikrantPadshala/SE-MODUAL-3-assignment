#include <stdio.h>

int main() 
{
    int num, first_digit, last_digit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Extract first digit
    first_digit = num;
    while (first_digit >= 10)  // Extract first digit
	{
        first_digit /= 10;
    }

  
    last_digit = num % 10;  // Extract last digit

        sum = first_digit + last_digit;// Compute sum of first and last digit


    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}

