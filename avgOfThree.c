//maximum of two numbers.
#include<stdio.h>

int main()
{
	int a, b, c, sum;
	float avg;
	printf("Input three numbers:");
	scanf("%d%d%d", &a,&b,&c);
	
	sum = a+b+c;
	
	//avg = sum/3;
	avg = (float)sum/3;
	
	printf("The avg is :%f", avg);
	printf("The sum is :%d", sum);
	
	return 0;
}
