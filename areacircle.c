//area of a cirle
#include<stdio.h>

int main()
{
	int radius;
	
	float area; 
	printf("Input radius:");
	
	scanf("%d", &radius);
	
	
	area = 3.1416*radius*radius;   //PI = 3.1416
	
	printf("Area of the circle is: %.2f\n", area);
	return 0;
}
