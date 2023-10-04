/**
 * Advanced Search Version:
 * Capable of searching item
 * in a sub part of the list.
 * Search an element in a list in one part of the list
 * of items.
 */

#include<stdio.h>
int main()
{
	int list[] = {12, 111, 14, -1, 11, 15, 10, 15, 99}, len, i, value, found, low, high;

	len = sizeof(list)/sizeof(list[0]);    //capacity of the array 'list'

	printf("What do you want to search:");
	scanf("%d", &value);

	printf("Input lower range and higher range <should be between 0- %d> and low lesser than higher range", len-1);
	scanf("%d%d", &low,&high);

	found = 0; // initially assume 'value' not in the list
		   
	//Displaying the items in the list
	printf("Searching %d in the list:  in range(%d,%d)\t\n", value, low, high);
	for(i=low; i<=high; ++i)
		printf("%d,", list[i]);
	printf("\n");



	for(i=low; i<high; ++i)
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

