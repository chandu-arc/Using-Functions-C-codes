/* consonant or vowel
 array ascending order
array descending order
factorial
palindrome or not
prime
palindrome
even or odd
greatest of two
greatest of three
leap year 
table */

#include<stdio.h>

void vowel(char);
void ascending(int d[],int size);
void decending(int d[],int size);
void fact(int);
void palindrome(int);
void prime(int);
void evenodd(int);
void greatest(int ,int);
void greatest(int ,int ,int);
void leap(int);
void table(int);

int main()
{
	int a,b,c,n,d[100];
	printf("Enter a character to ckeck Vowel:");
	scanf("%c",&a);
	vowel(a);
	
	printf("enter n array size:");
	scanf("%d",&n);
	ascending(d,n);
	
	printf("enter n array size:");
	scanf("%d",&n);
	decending(d,n);
	
	printf("Enter a value for factorial:");
	scanf("%d",&a);
	fact(a);
	
	printf("Enter a value for palindrome:");
	scanf("%d",&a);
	palindrome(a);
	
	printf("Enter a value for prime:");
	scanf("%d",&a);
	prime(a);
	
	printf("Enter a value for even or odd:");
	scanf("%d",&a);
	evenodd(a);
	
	printf("Enter a,b values for greatest:");
	scanf("%d %d",&a,&b);
	greatest(a,b);
	
	printf("Enter a,b,c values for greatest:");
	scanf("%d %d %d",&a,&b,&c);
	greatest(a,b,c);
	
	printf("Enter a value for leap year:");
	scanf("%d",&a);
	leap(a);
	
	printf("Enter a value for table:");
	scanf("%d",&a);
	table(a);
}
void vowel(char a)
{
	if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'|| a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U')
		printf("Vowel\n");
	else
		printf("consonent\n");
}
void ascending(int d[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("enter integer:");
		scanf("%d",&d[i]);
	}	
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(d[i] > d[j])
			{
				int temp = d[j];
				d[j] = d[i];
				d[i] = temp;
			}
		}
	}
	for(int i=0;i<size;i++)
		printf("%d\t",d[i]);
	printf("\n");
}
void decending(int d[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("enter integer:");
		scanf("%d",&d[i]);
	}	
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(d[i] < d[j])
			{
				int temp = d[j];
				d[j] = d[i];
				d[i] = temp;
			}
		}
	}
	for(int i=0;i<size;i++)
		printf("%d\t",d[i]);
	printf("\n");
}
void fact(int a)
{
	int fact=1;
	for(int i=1;i<=a;i++)
	{
		fact = fact * i;
	}
	printf("%d\n",fact);
}
void palindrome(int a)
{
	int x=a,rev=0;
	while(a!=0)
	{
		int rem = a%10;
		rev = rev *10 + rem;
		a = a/10;				// n /= 10;
	}
	if( x == rev)
		printf("Palindrome\n");
	else
		printf("Not a Palindrome\n");
}
void prime(int a)
{
	int count=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i == 0)
		{
			count++;
		}
	}
	if(count == 2)
		printf("prime number\n");
	else
		printf("Not a prime number\n");
}
void evenodd(int a)
{
	if(a%2 == 0)
		printf("Even\n");
	else
		printf("Odd\n");
}
void greatest(int a,int b)
{
	if(a>b)
		printf("%d is greatest\n",a);
	else
		printf("%d is greatest\n",b);
}
void greatest(int a,int b,int c)
{
	if((a>b)&&(a>c))
		printf("%d is greatest\n",a);
	else
	{
		if(b>c)
			printf("%d is greatest\n",b);
		else
			printf("%d is greatest\n",c);
	}
}
void leap(int a)
{
	if(((a%4==0)&&(a%100!=0)) || (a%400==0))
		printf("leap year\n");
	else
		printf("Not a leap year\n");
}
void table(int a)
{
	for(int i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n",a,i,a*i);
	}
}
