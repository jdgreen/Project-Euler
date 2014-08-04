#include <stdio.h>

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#define MAX 100

int main(int argc, char const *argv[])
{
	//compute sums
	int tot_s=0, tot_ns=0, diff;

	for (int i = 1; i <= MAX; i++){
		tot_s += i*i;
		tot_ns += i;
	}
	//find difference
	diff = tot_ns*tot_ns - tot_s;
	
	printf("%d\n", diff);
	return 0;
}