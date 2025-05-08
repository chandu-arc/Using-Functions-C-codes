// Print Palindrome or not  without return type & without arguments

#include<stdio.h>

void palindrome();
main()
{
	palindrome();
	palindrome();
}
void palindrome()
{
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	int x=a,rev=0;
	while(a!=0)
	{
		int rem = a%10;
		rev = rev*10 + rem;
		a = a/10; 
	}
	if(x == rev)
		printf("palindrome\n");
	else
		printf("Not a palindrome\n");
	
}
