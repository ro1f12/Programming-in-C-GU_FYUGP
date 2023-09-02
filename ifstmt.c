/**
*
* @author: rofi
*/
#include<stdio.h>

/**
*   Definitions:
*	------------
*	Statement: An expression terminated by a semicolon is a statement.
*	Simple Statement: A single statement is called a simple statement.
*	Compound Statement: block statement: A statement can be combination of multiple simple statements 
*						placed inside a pair of curley braces {...}; is called a compound statement 
*						or a block statement.
*		
*
*
*/



/*
*	if(expr)
*		stmt1
*	else
*		stmt2
*
*		The if-else statement is also known as conditional statement.
*		if the value of expr is a non-zero positive number than stmt1 is executed.
*		otherwise, stmt2 is excuted.
*		
*		Points to remember:
*		1. stmt1 and stmt2 can be compund or simple statement.
*		2. if stm1 and stm2 are compund statements then they must be kept inside a pair of curly braces({...})
*			as shown below-
*			if(expr){
*				simple_stmt1
*				simple_stmt2
*				.
*				.
*			}else{
*				simple_stmt3
*				simple_stmt4
*				.
*				.
*			}
*
*
*/


//A simple program to check whether a number is odd or even to show use of if-else statement.
int main()
{
	int num;
	printf("Input a number to check odd or even:");
	
	scanf("%d", &num);
	
	if(num%2 == 0){				// num%2 gives the reminder and num%2 == 0 checks if the reminder is zero or not
			printf("%d is even\n", num);
			printf("next even number is: %d\n", num+2);
	}else{
		printf("%d is odd\n", num);
		printf("previous odd number is: %d\n", num-2);
	}
	
	
	return 0;
}
