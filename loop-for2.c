//Displaying the series of even numbers staring from zero
// 0, 2, 4,.....................

#include<stdio.h>


int main()
{
	int i, n;
	
	printf("Input upper limit:");
	scanf("%d", &n);
	
	
	printf("Displaying even number series: ");
	for(i=1; i<=n; i=i+1)
	{
		if(i%2 == 0){
			printf(" %d", i);
		}
	}
	
	
	printf("\n");
	return 0;
}
