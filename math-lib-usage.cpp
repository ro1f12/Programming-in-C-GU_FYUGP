#include<stdio.h>
#include<math.h>

int main()
{
	int b, p;
	double result;
	
	printf("Input base and power:");
	scanf("%d%d", &b,&p);
	
	result = pow(b, p);       // using function pow(...) math.h header file
	
	printf("Value %d raised to power %d is: %.2lf\n", b, p, result);
	return 0;
}
