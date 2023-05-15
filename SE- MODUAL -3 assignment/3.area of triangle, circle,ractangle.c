#include<stdio.h>
int main()
{
	
	printf("Find the area of Triangle\n");
	float base,height,area;//declairation of variables
	printf("enter the base:-");
	scanf("%f",&base);//it will take value from user
	printf("enter the height:-");
	scanf("%f",&height);//it will take value from user
	area=(height*base)/2;//this is the equation of area for Triangle
	printf("area of triangle is:- %f\n",area);
	

	printf("-----------------------------------\n");
	printf("find the area of circle\n");
	float pi,r;
	pi=3.14;//this is universal value of PI
	printf("enter the redius of circle :-");
	scanf("%f",&r);//it will take value from user
	
	printf("area of circle is=%f\n",pi*r*r);//this is the equation of area for circle
	printf("-----------------------------------\n");
	
	
  float a,b,answer;
  printf("find the perimeter of ractangle\n");
  printf("add the side a:-\n");
  scanf("%f",&a);//it will take value from user
  printf("add the side b:-\n");
  scanf("%f",&b);
  answer=a*b;//it will give us the answer
  printf("perimeter of ractangle is=%f\n",answer);
  
 
  

	
	return 0;
}
