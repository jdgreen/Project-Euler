#include <stdio.h>

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#define MAX 20

int main(int argc, char const *argv[])
{
	int number = 1, multi;

	//nested for loop iterating through the numbers
	for (int i = 2; i <= MAX; i++){

		//check whether divisible
		if( number % i == 0) continue;
		multi = i;

		//check that previous numbers don't have prime factors that are divisible
		for(int j = i-1; j>=1; j--){
			if( multi % j == 0){
				multi /= j;
				break;
			}
		}
		//update total number
		number *= multi;
	}
	printf("%d\n", number);
	return 0;
}