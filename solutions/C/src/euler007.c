#include <stdio.h>
#include <math.h>

// What is the 10001st prime number?

#define NUM_PRI 10001

//check if prime number
int prime(int num)
{
	for(int i=(int) sqrt(num); i>1; i--){
		if(num % i == 0) return 0;
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	//initialise variables
	int count=0, num=1;

	//while loop to determine prime number

	while( count <= NUM_PRI ){
		if( prime(num) == 1 ) count += 1;
		num += 1;
	}
	printf("%d\n", num-1);

	return 0;
}