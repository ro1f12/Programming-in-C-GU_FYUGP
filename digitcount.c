#include<stdio.h>
#include<string.h>

int main()
{
	int digit_count[10],i;
	char input[100] = "101920121902183803180180318031830138013813180301831803801";
	char ch;

	int len = strlen(input);

	//initialize all digit occurance  count to zero
	for(i=0; i<10; i++)
		digit_count[i] = 0;

	//printf("Input 0-9 multiple times:\n");

	for(i=0; i<len; i++)
	{
		ch = input[i];
		switch(ch)
		{
			case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
				{
					digit_count[ch-'0']++;
				}
		}
	}


	printf("The occurance of digits are counted as below for the string \"%s\" :\n", input);

	for(i=0; i<10; i++)
		printf(" %d counted %d times\n", i, digit_count[i]);
	return 0;
}


