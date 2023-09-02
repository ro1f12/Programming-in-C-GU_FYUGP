#include<stdio.h>
#include<malloc.h>
int main()
{
int i,*p;
p=(int *)malloc(5*sizeof(int));
printf("\n Lets see");
for(i=0;;i++)
{
	*(p+i)=0;

	printf(" \n %d",*(p+i));
//	system("clear");
}

return 0;
}





