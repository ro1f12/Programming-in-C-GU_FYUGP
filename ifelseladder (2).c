#include<stdio.h>
int main()
{
    char ch = getchar(); //read a character
    
    if(ch>='0' && ch <= '9')      //range should be strictly between '0' and '9'
               printf("%c is digit\n", ch);
    else if(ch>='A' && ch <= 'Z')  //range should be strictly between 'A' and 'Z'
                    printf("%c is an uppercase character\n", ch);
    else if(ch>='a' && ch <= 'z') //range should be strictly between 'a' and 'z'
                    printf("%c is a lowercase character\n", ch);
         else
             printf("The inputed character is something else\n");  // if anything else is inputed this will handle

    return 0;
}
