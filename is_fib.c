/* to find the given number in afibnocci */

/* n=8 
True
n=10
not true */

#include<stdio.h>
int is_fib(int num)
{
	int a=0,b=1,c;
	if(num==0)
	{
		return 1;
	}
	while(1)
	{
		c=a+b;
		if(c>=num)
		{
			break;
		}
		a=b;
		b=c;
	}
	  return num==c;
}
int main()
{
	int num;
	scanf("%d",&num);
	if(is_fib(num))
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	 return 0;
}
