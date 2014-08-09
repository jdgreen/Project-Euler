#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Find the sum of all the primes below two million.

#define MAX 2000000
#define CHECK true

//the maximum length of array required from a given max integer assuming no duplicates
int max_len(int num){
	//declare and assign variables
	int len=0;
	double value;
	value = (double) num*num;

	//calculate length required
	while( value >= 1){
		value /= 10;
		len++;
	}
	return len;
}

//computes the length of an integer (similar to above)
int length(int num){
	int len=0;
	double buf = (double) num;
	while( buf >= 1){
		buf /= 10;
		len++;
	}
	return len;
}

int main(int argc, char const *argv[])
{
	//initialise variables
	int num = 3, count=1, pri, tot=0;
	int buf, carry=0, len=max_len((MAX)), *result, num_len, index; //for the addition
	char *val;

	//remembering to cast the malloc with a C++ compiler
	int *primes = (int *) malloc( sizeof(int) );
	primes[0] = 2; //assigning the first value to 2
	result = (int*) calloc( len, sizeof(int) );	
	val = (char *) calloc( len, sizeof(char) );	

	//logic accounts for when there is insufficient memory
	if( primes != NULL || (result != NULL) || (val != NULL)){
		while(num < MAX){
			// printf("%d %d\n", num, primes[0]);

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
			//progress checker
			if( CHECK == true){
				if( num % (MAX/100) == 0){
					printf("%d%%\n", (int)(((double)num/MAX)*100));
				}
			}
			num++;
		}
		//sum up all the prime numbers
		// for( int a=0; a < count; a++){
		// 	tot += primes[a];
		// }
		// printf("%d\n", tot);
		for(int a=0; a < count; a++){
			//for each number in values apply to a pointer and add to results
			sprintf(val, "%d", primes[a]);		

			//get length of each pointer
			num_len = length(primes[a]);

			//compare indices for addiiton
			for(int i=len-1; i >= 0; i--){
				index = num_len+i-len;
				//for values outside the range of value pointer
				if( index < 0){	buf = result[i] + carry; }

				else{ 
					buf = result[i] + carry + val[index]-48;
				}
				result[i] = ( buf < 10 ) ? buf : buf-10;
				carry = (int) buf/10;
			}
		}
		int start=0;
		int a;
		for( a=0; a < len; a++ ){
			if( result[a] != 0) {
				start=1;
				break;
			}
		}
		for( a; a < len; a++ ){
			printf("%d", result[a]);
		}
		printf("\n");
		// clear memory and finish off
		free(primes);
		free(result);
		free(val);
		return 0;
	}
	else{
		printf("!!! Insufficient memory\n");
		perror ("Error");
		return 1;		
	}
}