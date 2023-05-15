#include<stdio.h>
int main()
{
	int x=2,y=4;
	printf("before swap x=%d y=%d\n",x,y);
	x=x+y;//6(2+4)
	y=x-y;//2(6-4)
	x=x-y;//4(6-2)
	printf("after swaping x=%d,y=%d\n",x,y);
	
	return 0;
}	
