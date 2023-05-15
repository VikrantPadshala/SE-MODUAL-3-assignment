#include <stdio.h>

int main() 
{
    int num, i, j;
    
    
    printf("Enter a number: ");// Get user input for number
    scanf("%d", &num);
    
    
    for (i = 1; i <= num; i++) 
	{
        printf("Multiplication table for %d:\n", i);
        
        for (j = 1; j <= 10; j++) // repeating the numbers 1 to 10
		{
            printf("%d x %d = %d\n", i, j, i*j);
        }
        
        printf("\n"); // Add a newline after each table
    }
    
    return 0;
}

