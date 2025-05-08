// swapping of two numbers using functions Without return type and with Arguments

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
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swapping a=%d, b=%d",a,b);
}
