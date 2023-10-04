/**
 * Search an element in a list 
 * of items.
 */

#include<stdio.h>
int main()
{
	int list[] = {12, 111, 14, -1, 11, 15, 10, 15, 99}, len, i, value, found;

	len = sizeof(list)/sizeof(list[0]);    //capacity of the array 'list'

	printf("What do you want to search:");
	scanf("%d", &value);

	found = 0; // initially assume 'value' not in the list
		   
	//Displaying the items in the list
	printf("Searching %d in the list: \t\n", value);
	for(i=0; i<len; ++i)
		printf("%d,", list[i]);
	printf("\n");



	for(i=0; i<len; ++i)
	{
		if(list[i] == value){
			found = 1;   //if found set found to 1
				     //and break the loop
			break;
		}
	}

	//check value to find the result
	if(found == 1){
		printf("%d is in the list at index %d\n", value, i);
	}else{
	
		printf("%d is in not in the list.\n", value);
	}

	return 0;
}

