//check if a bit in position p of an unsigned integer is set or reset.
/**
* input: unsigned integer n
*		 unsigned int position p
*/ 

#include<stdio.h>
int main()
{
	unsigned int n, p, check_bit;
	
	printf("Input an unsigned integer:");
	scanf("%u", &n);
	printf("Input bit position %d you want to ckeck for:", n);
	scanf("%u", &p);
	
	n >>= p;
	check_bit = n & 01;
	
	printf("The %d-th bit of is %s\n", p, (check_bit? "set":"not set")); 
	return 0;
}



