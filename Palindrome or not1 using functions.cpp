// Given number is Palindrom or not using functions

#include<stdio.h>

void Check(int);
main()
{
	int x;
	printf("Enter x value:");
	scanf("%d",&x);
	Check(x);
	Check(120);
	
	
}
void Check(int n)
{
	int x=n,rev=0;
	while(n!=0)
	{
		int rem = n%10;
		rev = rev *10 + rem;
		n = n/10;				// n /= 10;
	}
	if( x == rev)
		printf("Palindrome\n");
	else
		printf("Not a Palindrome\n");
}
