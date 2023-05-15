#include <stdio.h>

int main() 
{
    int num, i, num1 = 0, num2 = 1,nextnum;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");

    for (i = 1; i <= num; i++) 
	{
        printf("%d\n", num1);
        nextnum = num1 + num2;
        num1 = num2;
        num2 = nextnum;
    }

    return 0;
}

