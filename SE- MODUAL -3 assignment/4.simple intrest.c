#include<stdio.h>

int main()
{

	printf("Find the simple intrest of any amount \n");
	float amount,intrest,time,answer;//declairation of variables
	
	printf("add the amount:-");
	scanf("%f",&amount);//it will take the value from user
	printf("add the intrest rate:-");
	scanf("%f",&intrest);//it will take the value from user
	printf("add the time:-");
	scanf("%f",&time);//it will take the value from user
	answer=(amount*intrest*time)/100;//this will calculate the intrest
	printf("total intrest for given amount is=%f",answer);
	
	return 0;
}
