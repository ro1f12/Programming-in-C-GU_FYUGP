/**
* @author: rofi
*/

#include<stdio.h>


int main()
{
/**
*	Bitwise Operators:&, |,^,~, <<, >>
*		a) Bitwise AND &: m & n performs bitwise AND operations on the bits.
*		b) Bitwise OR |: m | n performs bitwise OR operations on the bits.
*		c) Bitwise left-shift <<: m<<n is equivalent to m multiplied by 2 raised to power n.
*		d) Bitwise Right-shift >>: m>>n is equivalent to m multiplied by 2 raised to power -n.
*		e) Bitwise Exclusive-OR ^: m ^ n performs bitwise Ex-OR operations on the bits.
*			(different bit results in True value)
*		f) One's Complement ~ <unary operator>: ~m  performs 1's complement  operation on the bits of the operand.
*/

	int m,n, result;
	printf("input m, n");
	scanf("%d%d", &m,&n);
	
	//left shift
	result = m<<n;
	printf("%d << %d = %d\n", m, n, result);
	
	
	
	//right shift
	result = m>>n;
	printf("%d >> %d = %d\n", m, n, result);
	
	//bitwise AND
	result = m&n;
	printf("%d & %d = %d\n", m, n, result);
	
	//bitwise OR
	result = m | n;
	printf("%d | %d = %d\n", m, n, result);
	
	//bitwise EX-OR
	result = m^n;
	printf("%d ^ %d = %d\n", m, n, result);
	
	
	//One's complement

	return 0;
}
