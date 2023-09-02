//program to covert temperature C to F
//V1.0.0

#include<stdio.h>
int main()
{
	int fahr, celsius;
	printf("Input temerature in celsius to covert:");
	scanf("%d", &celsius);
	
	fahr = ((9/5)*celsius - 32);        // As celsius = 5 * (fahr - 32) / 9 
	
	printf("%dC=\t%dF\n",celsius, fahr);
	return 0;
}
