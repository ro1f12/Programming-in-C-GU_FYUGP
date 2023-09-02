//check if input character is a digit(0...9) or not
#include<stdio.h>
int main()
{
	char ch;
	int check_digit;
	printf("Input a character to check if digit or not:");
	ch = getchar();    //returned ASCII value is assigned to ch variable as a character
		
	//check if the inputed character is digit or not
	check_digit = (ch >= '0' && ch <= '9'); //'1'->48, '9'->57
	
	
	if(check_digit==1)	
		printf("'%c' is a digit\n", ch);
	else   
		printf("'%c' is not a digit\n", ch);
	//putchar(ch);
	return 0;
}

