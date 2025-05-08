// swapping of two numbers using functions Without return type and with Arguments
// without third variable

#include<stdio.h>

void swap(int,int);
main()
{
	int a,b;
	printf("Enter a,b values:");
	scanf("%d %d",&a,&b);
	swap(a,b);
}
void swap(int a, int b)
{
	a = a+b;
	b = a-b;
	a = a-b;
	printf("After swapping a=%d, b=%d",a,b);
}
