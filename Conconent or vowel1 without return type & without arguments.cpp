// Print Conconent or vowel without return type & without arguments

#include<stdio.h>
void vowel();
main()
{
	vowel();
	vowel();
}
void vowel()
{
	char a;
	printf("Enter  character:");
	scanf(" %c",&a);
	
	if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'|| a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U')
		printf("Vowel\n");
	else
		printf("consonent\n");
}
