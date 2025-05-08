// Print Addition of two numbers using functions Wretutn type & WOArguments

#include<stdio.h>

float add();
main()
{
	printf("%f\n",add());
	printf("%f",add());
}
float add()
{
	int x;
	float y;
	printf("enter x,y values:");
	scanf("%d %f",&x,&y);
	
	return x+y;
}
