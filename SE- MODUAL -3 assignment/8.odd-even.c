#include<stdio.h>
int main()
{
    //odd-even numbers
printf("enter the number to find is it ODD or EVEN\n");
	int num;
	printf("enter the num\n");
	scanf("%d",&num);//take value from user
	if (num%2==0)//if it gives 0, it is even.
	{
	 printf("given num is even\n");
	}
	else 
	{
	 printf("num is odd\n");
	}
	
	return 0;

}
