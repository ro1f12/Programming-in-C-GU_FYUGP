#include<stdio.h>

int main()
{
	char ch;
	
	puts("Input a character to change case:");  // puts(...) is used to display a string in std display
	ch = getchar();	// getchar(...) is used to read a character from std input device
	
	if(ch>='a' && ch <='z'){
		ch -= 'a' - 'A';		// ch = ch - ('a' - 'A')    equivalent to ch = ch -32
		putchar(ch);	
	}
	else if(ch>='A' && ch<='Z')
	{
		ch += 'a' - 'A';		// ch = ch - ('a' - 'A')    equivalent to ch = ch -32
		putchar(ch);
	}else{
		puts("Invalid !!! input character is not a letter to change case\n");
	}
		
	
	return 0;
}
