// Given number is +ve or -ve or Zero using functions

#include<stdio.h>

void Check(int);
main()
{
	int x;
	printf("Enter x value:");
	scanf("%d",&x);
	Check(x);
	Check(0);
	Check(-2);	
}
void Check(int a)
{
	if(a>0)
		printf("Given number is positive\n");
	else
	{
		if(a<0)
			printf("Given number is Negative\n");
		else
			printf("Given number is Zero\n");
	}
}
