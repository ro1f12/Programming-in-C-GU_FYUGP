//check if input character is letter or not
#include<stdio.h>
int main()
{
	char ch;
	int check_lower, check_upper;
	printf("Input a character to check if letter or not:");
	ch = getchar();    //returned ASCII value is assigned to ch variable as a character
		
	//check if the inputed character is upper case or lower case.
	check_lower = (ch >= 'a' && ch <= 'z'); //a->97, z->122
	check_upper = (ch >= 'A' && ch <= 'Z');	//A->65, Z->90
	
	if((check_lower || check_lower)==1)	
		printf("'%c' is a character\n", ch);
	else   
		printf("'%c' is not a character\n", ch);
	return 0;
}

