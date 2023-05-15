#include<stdio.h>
int main()
{
	int year;
	printf("enter the year to know the type of year\n");
	scanf("%d",&year);
	if (year%4==0)
	{
		printf("this year is a leap year\n");
		
	}
	else 
	{
	    printf("this year is not a leap year");
	}
	
	return 0;
}
