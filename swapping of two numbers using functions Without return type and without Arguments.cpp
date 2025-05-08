
// swapping of two numbers using functions Without return type and without Arguments

#include<stdio.h>

void swap();
int main()
{
	swap();
}
void swap()
{
	int a,b,temp;
	printf("Enter a,b values:");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping a=%d, b=%d",a,b);
}
