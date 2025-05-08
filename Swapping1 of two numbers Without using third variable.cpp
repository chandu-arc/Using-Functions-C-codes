// Swapping of two numbers Without using third variable

#include<stdio.h>

main()
{
	int a,b;
	printf("Enter a,b values:");
	scanf("%d %d",&a,&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	printf("After swapping a=%d, b=%d",a,b);
}
