#include<stdio.h>

int main()
{
	char ch;
	
	puts("Input a character to  check vowel or not:");
	
	ch = getchar();
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': puts("Inputed character is a vowel\n");
				  break;
		default:  puts("Invalid character inputed!!!\n");
	}
	return 0;
}
