#include<stdio.h>

void itodigits(unsigned int n);

int main()
{
	unsigned int n;
	printf("input a number to dispaly the digits:");
	scanf("%u", &n);

	printf("The digits in %d are <using function>:\n", n);
	itodigits(n);
	

	printf("\nThe digits in %d are :\n", n);
	while(n != 0)
	{
		printf(" %d,", n%10);
		n /= 10;         
	}
	printf("\n");
	
	return 0;
}
void itodigits(unsigned int n)
{
	if(n !=0){
		//printf(" %d,", n%10);
		itodigits(n/10);	
		printf(" %d,", n%10);
	}

}
