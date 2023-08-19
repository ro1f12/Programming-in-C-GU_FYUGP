//displays sizes of different basic datatypes available in C

#include<stdio.h>
int main()
{
	int var_int;
	char var_char;
	float var_float;
	double var_double;

	//using sizeof operator
	/**
	*	sizeof(type) : returns size in bytes.
	*   sizeof(var): returns size of the variable type in bytes;
	*	sizeof(expr): expr is not not evaluated.
	*/

	printf("Size of int type is : %d Bytes\n", sizeof(int));	//using type with sizeof operator
	printf("Size of int type is : %d Bytes\n", sizeof(var_int));//using variable name with sizeof operator

	printf("Size of char type is : %d Byte\n", sizeof(char));	//using type with sizeof operator
	printf("Size of char type is : %d Byte\n", sizeof(var_char));//using variable name with sizeof operator
  
	printf("Size of float type is : %d Bytes\n", sizeof(float));	//using type with sizeof operator
	printf("Size of float type is : %d Bytes\n", sizeof(var_float));//using variable name with sizeof operator
  
	printf("Size of double type is : %d Bytes\n", sizeof(double));	//using type with sizeof operator
	printf("Size of double type is : %d Bytes\n", sizeof(var_double));//using variable name with sizeof operator

	return 0;
}
