//Octal and Hexadecimal Format Specifires in printf(...)

#include<stdio.h>

int main()
{
	int n;
	printf("Input one number:");
	scanf("%d", &n);
	
	/**
	*Special fmt specifiers in printf(...):
	*%x --> Hexadecimal.
	*%o --> Hexadecimal.
	*/
	printf("The Hexadecimal and Octal equivalent of %d are 0X%x and 0%o \n", n,n,n);
	return 0;
}
