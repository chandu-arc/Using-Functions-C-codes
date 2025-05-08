
// swapping of two numbers using functions Without return type and without Arguments
// without using third variable

#include<stdio.h>

void swap();
int main()
{
	swap();
}
void swap()
{
	int a,b;
	printf("Enter a,b values:");
	scanf("%d %d",&a,&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	printf("After swapping a=%d, b=%d",a,b);
}
