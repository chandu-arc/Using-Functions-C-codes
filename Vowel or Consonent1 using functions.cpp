// Given character is Vowel or Consonent using Function


#include<stdio.h>

void Check(char);
main()
{
	char ch;
	printf("Enter x value:");
	scanf("%c",&ch);
	Check(ch);
	Check('c');
}
void Check(char a)
{
	if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'|| a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U')
		printf("Vowel\n");
	else
		printf("consonent\n");

	// (a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'|| a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U') ? printf("Vowel") : printf("Consonent");
}
