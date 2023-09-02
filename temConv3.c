//program to covert temperature C to F
//V1.0.2

#include<stdio.h>
int main()
{
	float fahr, celsius;
	printf("Input temerature in celsius to covert:");
	scanf("%f", &celsius);
	
	fahr = ((9/5)*celsius - 32);        // As celsius = 5 * (fahr - 32) / 9 
	
	printf("%.2fC=\t%.2fF\n",celsius, fahr);		//look closely
	return 0;
}
