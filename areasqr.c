//area of a sqare
#include<stdio.h>
 

int main()
{
	int side;
	
	float area; 
	printf("Input side:");
	
	scanf("%d", &side);
	
	
	area = side*side;   //area = side*side
	
	printf("Area of the circle is: %.2f\n", area);
	return 0;
}
