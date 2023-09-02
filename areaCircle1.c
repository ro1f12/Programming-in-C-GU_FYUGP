//area of a cirle
#include<stdio.h>
#define PI 3.1416 

int main()
{
	int radius;
	
	float area; 
	printf("Input radius:");
	
	scanf("%d", &radius);
	
	
	area = PI*radius*radius;   //PI = 3.1416
	
	printf("Area of the circle is: %.2f\n", area);
	return 0;
}
