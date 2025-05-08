// Print Table without return type & without arguments

#include<stdio.h>

void table();
main()
{
	table();
	table();
}
void table()
{
	int n,i=1;
	printf("Enter n value:");
	scanf("%d",&n);
	
	while(i<=10)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
}
