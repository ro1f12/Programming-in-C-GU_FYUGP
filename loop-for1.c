//Displaying the series of even numbers staring from zero
// 0, 1, 2, 3,.....................

#include<stdio.h>


int main()
{
	int i, n;
	
	printf("Input upper limit:");
	scanf("%d", &n);
	
	
	printf("Displaying natural number series: ");
	for(i=0; i<=n; i=i+2)
	{
		printf(" %d", i);
	}
	
	
	printf("\n");
	return 0;
}
