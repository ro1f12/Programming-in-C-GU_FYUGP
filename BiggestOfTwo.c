//maximum of two numbers.
#include<stdio.h>

int main()
{
	int a, b;
	
	printf("Input numbers:");
	scanf("%d%d", &a,&b);
	
	
	if(a>b){
		printf("Biggest number is: %d\n", a);
	}else{
		printf("Biggest number is: %d\n", b);
	}
	return 0;
}
