// Input a day number and get the day

#include<stdio.h>

int main()
{
	int daynum;
	printf("Input a day number<0-6>");
	scanf("%d", &daynum);
	
	if(daynum == 0)
	{
		puts("Monday\n");
	}else if(daynum == 1){
		puts("Tuesday\n");
	}else if(daynum == 2){
			puts("Wednesday\n");
	}else if(daynum == 3){
		puts("Thursday\n");
	}else if(daynum == 4){
		puts("Friday\n");
	}else if(daynum == 5){
		puts("Saturday\n");
	}else if(daynum == 6)
	{
		puts("Sunday\n");
	}else{
		puts("Invalid day number!!!!");
	}
	
	return 0;
}
