// Print Prime or not  without return type & without arguments

#include<stdio.h>

void prime();
main()
{
	prime();
	prime();
}
void prime()
{
	int a,count=0;
	printf("enter a value:");
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		if(a%i == 0)
			count++;
	}
	if(count==2)
		printf("Prime\n");
	else
		printf("Not Prime\n");
}
