// Prime or not using functions

#include<stdio.h>

void Check(int);
main()
{
	int x;
	printf("Enter x value:");
	scanf("%d",&x);
	Check(x);
	Check(13);	
}
void Check(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			count++;
		}
	}
	if(count == 2)
		printf("prime number\n");
	else
		printf("Not a prime number\n");


}
