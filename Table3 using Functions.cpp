// Print Table using functions

#include<stdio.h>

void Check(int);
main()
{
	int x;
	printf("Enter x value:");
	scanf("%d",&x);
	Check(x);
	Check(10);
}
void Check(int n)
{
	int i=1;
	while (i<=10)
	{
		printf("%d * %d = %d \n",n,i,n*i);
		i++;
	}
	printf("\n");
}
