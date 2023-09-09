#include<stdio.h>
#include<time.h>

int main()
{
	int seconds = 0;
	
	int h,m,s;
	
	printf("Seconds:");
	scanf("%d", &seconds);
	
	for( ;seconds>0;seconds--)
	{
		h = seconds/3600;
		m = (seconds%3600)/60;
		s = (seconds%60);
		printf("\r%02d:%02d:%02d", h,m,s);
		fflush(stdout);
		
		clock_t stop = clock() + CLOCKS_PER_SEC; 
		
		for(;clock()<stop;);
		
	}
	
	printf("\rTime's Up!");
	
	return 0;
}
