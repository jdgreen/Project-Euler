#include <stdio.h>

// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#define MAX 4000000

int main(int argc, char const *argv[])
{
	//variables
	int fib1=1, fib2=1, tot=0;

	while(fib2 <= MAX){
		// Iterate Fibonacci
		fib2 += fib1;
		fib1 = fib2 - fib1;

		// Summate even numbers
		tot += ( fib1%2 == 0 ) ? fib1 : 0;
	}
	printf("%d\n", tot);
	return 0;
}