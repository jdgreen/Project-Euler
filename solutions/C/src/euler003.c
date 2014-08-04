#include <stdio.h>
#include <math.h>

// What is the largest prime factor of the number 600851475143

#define NUM 600851475143

// prime number checker with boolean output

int prime(int num)
{
	for(int i=(int) sqrt(num); i>1; i--){
		if(num % i == 0) return 0;
	}
	return 1;
}

// prime factors
int main(int argc, char const *argv[])
{
	//define dynamical variable max
	long max = NUM;
	int fact;

	// start with smallest prime factors and work up until max is prime
	for(int i=2; i<(int) sqrt(NUM); i++){
		// check whether the divisor is prime
		if( prime(i) == 0 ) continue;

		// divide through max with divisor and set current highest factor
		while(max % i == 0){
			max /= i; 
			fact = i;
		}
	}
	printf("%d\n", fact);
	return 0;
}