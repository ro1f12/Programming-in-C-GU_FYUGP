//program to display ASCII value of an input character
//v1.0.3
#include<stdio.h>
/*
*the getchar(...) function reads on character from standard input(Keyboard)
*and returns the corresponding ASCII.
*/ 


int main()
{
	char ch;
	printf("Input a character to display the ASCII value:");
	//scanf("%c", &ch);
	ch = getchar();    //returned ASCII value is assigned to ch variable as a character
		
	//%d-> displays the ASCII value %c-> displays the charater
	printf("The ASCII value of '%c' is: %d\n", ch, ch);   
	return 0;
}

