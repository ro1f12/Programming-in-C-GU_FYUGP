#include<stdio.h>
#include<time.h>

int main()
{
	int seconds = 0;
	
	printf("Seconds:");
	scanf("%d", &seconds);
	
	for( ;seconds>0;seconds--)
	{
		printf("\r%04d\n", seconds);
		fflush(stdout);
		
		clock_t stop = clock() + CLOCKS_PER_SEC; 
		
		for(;clock()<stop;){}
		
	}
	
	printf("\rTime's Up!");
	
	return 0;
}
