// Input a day number and get the day

#include<stdio.h>

int main()
{
	int daynum;
	printf("Input a day number<0-6>");
	scanf("%d", &daynum);
	
	
	switch(daynum){
		case 0 : puts("Monday");
				 break;
		
		case 1 : puts("Monday");
				 break;
		
		
		case 2 : puts("Tuesday");
				 break;
				 
		
		case 3 : puts("Wednesday");
				 break;
		
		case 4 : puts("Thursday");
				 break;
		
		
		case 5 : puts("Friday");
				 break;
				 
		case 6 : puts("Saturday");
				 break;
				 
		default : puts("Invalid day number!!!!");
	}
	
	return 0;
}
