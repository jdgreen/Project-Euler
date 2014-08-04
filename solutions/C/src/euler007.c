#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// What is the 10001st prime number?

#define NUM_PRI 10001

int main(int argc, char const *argv[])
{
	//initialise variables
	int num = 3, count=1, pri;

	//remembering to cast the malloc with a C++ compiler
	int *primes = (int *) malloc( sizeof(int) );
	primes[0] = 2; //assigning the first value to 2

	//logic accounts for when there is insufficient memory
	if( primes != NULL ){
		while(count < NUM_PRI){

			//resetting values
			pri=1;

			//for loop determining divisible factors
			for ( int a = 0; a < count; a++){
				if( num % primes[a] == 0) {
					pri = 0;
					break;
				}
			}

			//updating array with a prime number
			if( pri == 1 ){
				count += 1;
				primes = (int*) realloc( primes, count*sizeof(int) );
				primes[count-1] = num;
			}
		num++;
		}

		// clear memory and finish off
		free(primes);
		printf("%d\n", primes[NUM_PRI-1]);
		return 0;
	}
	else{
		printf("!!! Insufficient memory\n");
		return 1;		
	}
}