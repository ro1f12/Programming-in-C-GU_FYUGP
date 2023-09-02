//Leap year check
#include<stdio.h>

/**
* Conditions to check:
* i) a) year is divible by 4 [year%4==0]
*				and
*    b) year is not divisible by 100 [year%100 !=0]
*				or
* ii) year is divisible by 400 [year%400==0]
*/



int main()
{
	int year, check;
	printf("Input year to check leap year or not:");
	scanf("%d", &year);
	
	check = ;   //write your condition here.
	
	
	if(check){
		printf("%d is leap year\n", year);
	}else{
		printf("%d is leap year\n", year);
	}
	return 0;
}
