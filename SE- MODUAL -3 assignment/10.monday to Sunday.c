#include <stdio.h>

int main() 
{
    int day;//declairation of variable
    printf("YOU CAN KNOW THE DAY BY ENTERING NUMBERS\n");

    printf("Enter a number between 1 and 7: ");
    scanf("%d", &day);//value from user

    switch (day) 
	{
        case 1:
            printf("Monday\n");
            break;
		 case 2:
            printf("Tuesday\n");
            break;
         case 3:
            printf("Wednesday\n");
            break;
         case 4:
            printf("Thursday\n");
            break;
         case 5:
            printf("Friday\n");
            break;
         case 6:
            printf("saturday\n");
            break;
         case 7:
            printf("Sunday\n");
            break;
         default :
		 printf("you have entered invalid entry\n");
	}
	return 0;	
}
