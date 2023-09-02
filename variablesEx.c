//var dcl and init for basic datatypes in C

#include<stdio.h>
int main()
{
	//variable declaration of basic data types
	int var_int;
	char var_char;
	float var_float;
	double var_double;
	
	printf("\n------------------------\n");
	//displaying the updated values along with locations
	printf("displaying the uninitialized values stored in the variables along with locations\n");
	printf("Integer variable 'var_int' stores a value: %d is location: %d\n", var_int, &var_int);
	printf("Character variable 'var_char' stores a value: %c is location: %d\n", var_char, &var_char);
	printf("Float variable 'var_float' stores a value: %f is location: %d\n", var_float, &var_float);
	printf("Double variable 'var_double' stores a value: %lf is location: %d\n", var_double, &var_double);

	//variable initialization of basic data types.
	var_int = 10;
	var_char = 'A';
	var_float = 3.1416;
	var_double = 1e-12; //1e-12 =  1x10^-12 = 0.000000000001


	//displaying the values initialized along with locations
	printf("\n------------------------\n");
	printf("displaying the initialized values stored in the variables along with locations\n");
	printf("Integer variable 'var_int' stores a value: %d is location: %d\n", var_int, &var_int);
	printf("Character variable 'var_char' stores a value: %c is location: %d\n", var_char, &var_char);
	printf("Float variable 'var_float' stores a value: %f is location: %d\n", var_float, &var_float);
	printf("Double variable 'var_double' stores a value: %lf is location: %d\n", var_double, &var_double);
	printf("\n------------------------\n");


	/**
	* Let's try to read input from the keyboard using stdio.h--> scanf(...) function
	*/
	printf("Reading values for updating the already initialized variables:.....\n");
	printf("Input one character value to store the variable 'var_char':");
	scanf("%c", &var_char);		//reading input

	printf("Input one float value to store the variable 'var_float':");
	scanf("%f", &var_float);		//reading input


	printf("Input one integer value to store the variable 'var_int':");
	scanf("%d", &var_int);		//reading input

	printf("Input one double value to store the variable 'var_double':");
	scanf("%lf", &var_double);		//reading input


	printf("\n------------------------\n");
	//displaying the updated values along with locations
	printf("displaying the updated values along with locations\n");
	printf("Integer variable 'var_int' stores a value: %d is location: %d\n", var_int, &var_int);
	printf("Character variable 'var_char' stores a value: %c is location: %d\n", var_char, &var_char);
	printf("Float variable 'var_float' stores a value: %f is location: %d\n", var_float, &var_float);
	printf("Double variable 'var_double' stores a value: %lf is location: %d\n", var_double, &var_double);
	
	

	return 0;
}

