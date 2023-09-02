#include<stdio.h>

int main()
{
	int i;
	
	printf("\nDisplaying the ASCII value of digits characters:\n");
	for(i = '0'; i<='9'; i=i+1)
	{
		printf(" %c ----> %3d\n", i, i);
	}
	
	printf("Displaying the ASCII value of uppler case and lower case characters:\n");
	for(i = 'A'; i<='Z'; i=i+1)
	{
		printf(" %c ----> %3d\n", i, i);
	}
	
	for(i = 'a'; i<='z'; i=i+1)
	{
		printf(" %c ----> %3d\n", i, i);
	}
	
	
	
	return 0;
}
