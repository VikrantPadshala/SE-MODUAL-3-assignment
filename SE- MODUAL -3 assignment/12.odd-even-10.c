#include <stdio.h>

int main() 
{
    int numbers[10];int i;
    int even_numbers = 0, odd_numbers = 0;
    int even_total = 0, odd_total = 0;

    // Taking input from user
    for (i = 0; i < 10; i++) 
	{
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    // Counting even and odd numbers and calculating their sum
    for (i = 0; i < 10; i++) 
	{
        if (numbers[i] % 2 == 0) 
		{
            even_numbers++;
            even_total += numbers[i];
        } else 
		{
            odd_numbers++;
            odd_total += numbers[i];
        }
    }

    // Printing the results
    printf("Number of even numbers: %d\n", even_numbers);
    printf("Number of odd numbers: %d\n", odd_numbers);
    printf("Total of even numbers: %d\n", even_total);
    printf("Total of odd numbers: %d\n", odd_total);

    return 0;
}

