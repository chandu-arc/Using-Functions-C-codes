// Given number is Leap year or not using functions

#include<stdio.h>

void Check(int);
main()
{
	int x;
	printf("Enter x value:");
	scanf("%d",&x);
	Check(x);
	Check(400);	
}
void Check(int a)
{
	if(((a%4==0)&&(a%100!=0)) || (a%400==0))
		printf("leap year\n");
	else
		printf("Not a leap year\n"); 
}
