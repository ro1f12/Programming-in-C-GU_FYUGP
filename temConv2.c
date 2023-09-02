//program to covert temperature C to F
//V1.0.1

#include<stdio.h>
int main()
{
	float fahr, celsius;
	printf("Input temerature in celsius to covert:");
	scanf("%f", &celsius);
	
	fahr = ((9/5)*celsius - 32);        // As celsius = 5 * (fahr - 32) / 9 
	
	printf("%fC=\t%fF\n",celsius, fahr);
	return 0;
}
