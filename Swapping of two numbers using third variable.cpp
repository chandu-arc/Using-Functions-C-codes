// Swapping of two numbers using third variable

#include<stdio.h>

main()
{
	int a,b,temp;
	printf("Enter a,b values:");
	scanf("%d %d",&a,&b);
	
	temp=a;
	a=b;
	b=temp;
	printf("After swapping a=%d, b=%d",a,b);
}
