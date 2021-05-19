#include<stdio.h>
int fact(int num )
{
	int i,res=1;
	for(i=1;i<=num;i++)
	{
		res=res*i;
	}
	return res;	
}
int main()
{
	int num,res;
	scanf("%d",&num);
	res=fact(num);
	printf("%d",res);
	return 0;
}
