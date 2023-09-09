#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// create a new type coin that cain be either HEADS or TAILS
typedef enum coin {HEADS, TAILS} coin;

coin flipCoin();

int main()
{
	int i;
  // seed the random number generator to ensure pseudorandom random numbers
  srand(time(NULL));
  
  // perform 10 coin flips and output the result
  for (i = 0; i < 10; i++)
  {
    if (rand() % 2 == 0)
		printf("HEADS\n");
    else 
		printf("TAILS\n");
	}
  return 0;
}

