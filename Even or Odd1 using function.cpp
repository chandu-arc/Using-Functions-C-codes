// Even or not using functions

#include<stdio.h>

void Check(int);
main()
{
	int x;
	printf("Enter x value:");
	scanf("%d",&x);
	Check(x);
	Check(21);
	
	
}
void Check(int a)
{
	if(a%2 == 0)
		printf("Even\n");
	else
		printf("Odd\n");   
		
//	a%2==0 ? printf("even\n") : printf("odd\n");
}
