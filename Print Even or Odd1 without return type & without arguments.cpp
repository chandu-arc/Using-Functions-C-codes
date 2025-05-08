// Print Even or Odd without return type & without arguments

#include<stdio.h>

void evenodd();
main()
{
	evenodd();
	evenodd();
}
void evenodd()
{
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	if(a%2==0)
		printf("Even\n");
	else
		printf("Odd\n");
}
