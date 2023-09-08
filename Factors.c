//Display the factors of a number.

#include<stdio.h>


int main()
{
	int num, i;
	scanf("%d", &num);
	
	
	printf("Factors of %d are: ", num);
	for(i=1; i<=num/2; ++i)
	{
		if(num%i == 0)
		{
			printf("%d, ", i);
		}
	}
	
	printf("\n");
	
	
	return 0;
}
