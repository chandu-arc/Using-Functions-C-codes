// Print Leap or Not without return type & without arguments

#include<stdio.h>

void leap();
main()
{
	leap();
	leap();
}
void leap()
{
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	
	if(((a%4==0)&&(a%100!=0)) || (a%400==0))
		printf("Leap year\n");
	else
		printf("Non Leap year\n");
}


