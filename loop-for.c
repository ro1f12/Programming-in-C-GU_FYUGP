//Displaying the series of natural numbers

#include<stdio.h>


int main()
{
	int i, n;
	
	printf("Input how many numbers:");
	scanf("%d", &n);
	
	
	printf("Displaying natural number series: ");
	for(i=1; i<=n; i=i+1)
	{
		printf(" %d", i);
	}
	
	
	printf("\n");
	return 0;
}
