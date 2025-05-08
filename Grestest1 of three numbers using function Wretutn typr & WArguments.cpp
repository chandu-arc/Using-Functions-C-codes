// Print Grestest of three numbers using function Wretutn typr & WArguments

#include<stdio.h>
int greatest(int, int, int);
main()
{
	int a,b,c;
	printf("enter a,b,c values:");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n",greatest(a,b,c));
	printf("%d\n",greatest(10,20,15));
	printf("%d",greatest(10,20,30));
	
}
int greatest(int x,int y, int z)
{
	
	return (x>y ? (x>z ? x : z) : (y>z ? y : z));
}
