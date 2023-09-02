//program to check an input character is vowel or not
//v1.0.3
#include<stdio.h>
/*
*the getchar(...) function reads on character from standard input(Keyboard)
*and returns the corresponding ASCII.
*/ 


int main()
{
	char ch;
	int check;
	printf("Input a character to check vowel or not::");
	ch = getchar();    //returned ASCII value is assigned to ch variable as a character
		
	check = ch == 'a' || ch == 'A' || ch == 'e' || ch =='E'|| ch == 'i' || ch == 'I' || ch == 'o' || ch =='O'|| ch == 'u' || ch == 'U';	
	if(check == 1)	
		printf("'%c' is a vowel\n", ch);
	else   
		printf("'%c' is not a vowel\n", ch);
	return 0;
}

