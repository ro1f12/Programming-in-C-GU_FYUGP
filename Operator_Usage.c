//Different operator usagem       
/**
*@author: Rofi
*/

#include<stdio.h>

/**
*	Types of operators in C <based on type of operation>:
*		1. Arithmatic operators: +, -, *, /, % :
*				a) + : the binary addition operator can add two operands as the following syntax.
*						<operand> + <operand>
*						e.g. if m=3, n=2 the expression m+n will yeild a reult 2.
*				b) - : the binary subraction operator can subtract two operands as the following syntax.
*						<operand> - <operand>
*						e.g. if m=3, n=2 the expression m-n will yeild a reult 1.
*				c) * : the binary multiplication operator can multiply two operands as the following syntax.
*						<operand> * <operand>
*						e.g. if m=3, n=2 the expression m*n will yeild a reult 6.
*				d) / : the binary division operator can perform division of two operands as the following syntax.
*						<operand> / <operand>
*						e.g. if m=3, n=2 the expression m/n will yeild a reult 1.
*						incase of integer division the fractional part is truncated.
*				e) % : the binary modulus operator can perform reminder arithmetic operation two operands as the following syntax.
*						<operand> % <operand>
*						e.g. if m=3, n=2 the expression m%n will yeild a reult 1.
*
*  
*		2. Relational and Logical operators:
*						These operators forms expressions that gives boolean value True(1 or Non-zero number) or False(0).
*						of the form - 
*								<epr1> operand <expr2> 
*				 
*				i) Relational operators: >, >=, <, <=, ==, !=:
*
*						a) > : the greater than operator: True if expr1 is greater than expr2
*								
*						b) >= : the greater than equal to operator: True if expr1 is greater than equal to expr2
*
*						c) < : the lesser than to operator:True if expr1 is lesser than expr2
*
*						d) <= : the lesser than equal to operator:True if expr1 is lesser than equal to expr2
*
*						e) == : the equality to operator:True if expr1 and expr2 are equal
*
*						f) != : the not equal to operator:True if expr1 and expr2 are not equal  
*				ii) Logical Operators: &&, ||:
*						a) && : logical AND operator:
*									<epr1> && <expr2> : True(or 1) only when both expr1 and expr2 are True 
*									otherwise False(or Zero). 
*						b) || : logical OR operator:
*									<epr1> || <expr2> : True(or 1)  when any one of expr1 and expr2 are True 
*									otherwise False(or Zero). 
*
*				Note: By definition the numeric value of a relational or logical expression is 
*						a) 1 if the relation is True.
*						b) 0 if the relation is False.
*					  The unary negation operator (!) converts:
*						a)  a non-zero (or True) operand into zero (or False).
*						b)  a zero (or False) oprand into 1(or True).
*					
*
*
*				Tricky part about logical operators:
*						"....the logical operators && and ||. Expressions connected by && and || are evaluated 
*					left-to-rigth, and evaluation stops as soon as the truth or falsehood of the result is known..."
*					~K&R,p-41,The C Programming Language,3e,Pearson.
* 
*			3. Bitwise Operators:&, |, <<, >>
*						a) Bitwise AND &: m & n performs bitwise AND operations on the bits.
*						b) Bitwise OR |: m | n performs bitwise OR operations on the bits.
*						c) Bitwise left-shift <<: m<<n is equivalent to m multiplied by 2 raised to power n.
*						d) Bitwise Right-shift >>: m<<n is equivalent to m multiplied by 2 raised to power -n.
*/

int main()
{
	int m,n;
	printf("Input values for m, n to check usage of differnt operators available in C:");
	scanf("%d%d", &m,&n);	
	printf("Using operators on %d and %d\n", m, n);
	/**printf("Addition: %d\n", m+n);
	printf("Subtraction:%d\n", m-n);
	printf("Multiplication:%d\n", m*n);
	printf("Division:%d\n", m/n);
	printf("Modulus:%d\n", m%n);
	*/
	printf("Greater than:%d\n", m>n);
	printf("Greater than equal to:%d\n", m>=n);
	printf("Lesser than:%d\n", m<n);
	printf("Lesser than equal to:%d\n", m<=n);
	printf("Equality:%d\n", m==n);
	printf("Not equal to:%d\n", m!=n);
	printf("Negation of %d is:%d\n",n, !n);
	printf("Bitwise AND to:%d\n", m | n);
	printf("Bitwise OR to:%d\n", m & n);
	printf("Bitwise left shift by 1 on %d to:%d\n", m,  m<<1);
	printf("Bitwise right shift by 1 on %d to:%d\n", m,  m>>1);
	
	return 0;
}
