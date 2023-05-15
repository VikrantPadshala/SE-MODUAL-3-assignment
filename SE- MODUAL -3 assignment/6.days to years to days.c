#include<stdio.h>
int main()
{
	printf("find what you want to convert\n");
	char num;
	
	float i,ans;
	welcome :
	printf("press 1 to convert days into years\n");
	printf("press 2 to convert years into days\n");
	scanf("%c",&num);

	
	switch (num)
	 {
	 	case '1':
	 		printf("enter the number of days:-");
	 		scanf("%f",&i);
	 		ans=i/365;
	 		printf("%f year",ans);
	 		break;
	 	case '2':
	 		printf("enter the number of year:-");
	 		scanf("%f",&i);
		    ans=i*365;
			printf("%f days",ans);
			break;
		default : 
		printf("you have enterd invalid command");	
				
	 		
	 	
	 	
	 }
	
	
	return 0;
}
