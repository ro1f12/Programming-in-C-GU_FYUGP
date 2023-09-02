#include<stdio.h>
#include<math.h>

int main()
{
	int num;
	double sroot;
	
	printf("Input a number to find square root:");
	scanf("%d", &num);
	
	sroot = sqrt(num);       // using function sqrt(...) math.h header file
	
	printf("Square root of %d is: %.2lf\n", num, sroot);
	return 0;
}
