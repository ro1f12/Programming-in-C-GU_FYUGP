//A number is called perfect if the sum of all the factors is the number itself
//e.g. 6 is is a perfect number . Fcators of 6 are 1,2,3 --->   1+2+3=6  

#include<stdio.h>


int main()
{
	int num, i, factorSum=0;
	scanf("%d", &num);
	
	
	// finding the sum of the factors.
	for(i=1; i<=num/2; ++i)
	{
		if(num%i == 0)
		{
			factorSum += i;
		}
	}
	
	
	
	//checking if the sum same as the number itself.
	if(factorSum == num){
		printf("%d is a perfect number\n", num);
	}else{
		printf("%d is not a perfect number\n", num);
	}
	
	printf("\n");
	
	
	return 0;
}
