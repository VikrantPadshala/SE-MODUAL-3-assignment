#include<stdio.h>
int main ()
{
	printf("SIMPLE CALCULATOR\n");
	
	printf("Press the keys according to your requirement \n");
	
  int num1,num2,num,ans;//declairation of variables
  
  printf("1.addition\n2.substraction\n3.multiplication\n4.dividation\n5.Modulo\n");
  
  scanf("%d",&num);//it will take value from user
  switch(num)//this is for user to choose their calclulation
  { 
    case 1 :
           printf("enter the number 1\n");
           scanf("%d",&num1);//it will take value from user
           printf("enter the number 2\n");
           scanf("%d",&num2);//it will take value from user
        ans=num1+num2;//this will calculate our values
        printf("answer is %d\n",ans);
        break;
     case 2 :
           printf("enter the number 1\n");
           scanf("%d",&num1);//it will take value from user
           printf("enter the number 2\n");
           scanf("%d",&num2);//it will take value from user
        ans=num1-num2;//this will calculate our values
        printf("answer is %d\n",ans);
        break;
    case 3 :
           printf("enter the number 1\n");
           scanf("%d",&num1);//it will take value from user
           printf("enter the number 2\n");
           scanf("%d",&num2);//it will take value from user
        ans=num1*num2;//this will calculate our values
        printf("answer is %d\n",ans);
        break;
     case 4 :
           printf("enter the number 1\n");
           scanf("%d",&num1);//it will take value from user
           printf("enter the number 2\n");
           scanf("%d",&num2);//it will take value from user
        ans=num1/num2;//this will calculate our values
        printf("answer is %d\n",ans);
        break;
     case 5 :
           printf("enter the number 1\n");
           scanf("%d",&num1);//it will take value from user
           printf("enter the number 2\n");
           scanf("%d",&num2);//it will take value from user
        ans=num1%num2;//this will calculate our values
        printf("answer is %d\n",ans);    
        break;
 default :
        printf(" You have entered invalid command");


  }

    return 0;
}
