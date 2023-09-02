#include<stdio.h>
int main()
{

/**
*	?: is known as ternary opeartor.
*	<expr1> ?	<expr2>:<expr3>
*	if expr1 is True then expr2 is evaluated
*	else expr2 is evaluated.
*
*/

//finding the maximum of two numbers(evaluated using ternary operator).

int a, b, max;
printf("Input two numbers to find maximum of two numbers:");
scanf("%d%d",&a,&b);

max = a>b?a:b;

/**
* The above statement is equivalent to:
* if(a>b)
*	max = a;
* else
*	max = b;
**/
printf("The maximum number is: %d\n", max);

return 0;
}
