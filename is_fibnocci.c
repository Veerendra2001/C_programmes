/* to find the given number in afibnocci */

/* n=8 
TRUE
n=10
FALSE */

#include<stdio.h>
int is_fib(int num)
{
	int a=0,b=1,c;
	while(c<num)
	{
	 c=a+b;
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
