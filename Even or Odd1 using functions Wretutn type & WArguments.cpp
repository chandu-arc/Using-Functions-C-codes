// Print Even or Odd using functions Wretutn type & WArguments

#include<stdio.h>

int evenodd(int);
main()
{
	if(evenodd(5))
		printf("Even");
	else
		printf("Odd");
	
}
int evenodd(int a)
{
	int r;
	if(a%2 == 0)
		r=1;
	else
		r=0;
		
	return r;
}
