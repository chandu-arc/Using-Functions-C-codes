// Print Factorial using functions Wretutn typr & WArguments

#include<stdio.h>

int fact(int);
main()
{
	int x;
	printf("Enter x value:");
	scanf("%d",&x);
	printf("%d\n",fact(x));
	printf("%d",fact(10));	
}
int fact(int a)
{
	int fact=1;
	for(int i=1;i<=a;i++)
	{
		fact = fact * i;
	}
	return fact;
}
