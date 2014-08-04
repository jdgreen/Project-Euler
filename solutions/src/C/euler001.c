#include <stdio.h>

//Find the sum of all the multiples of 3 or 5 below 1000.

int main(int argc, char const *argv[])
{
	int tot=0;
	for ( int i=1 ; i<1000 ; i++){
		tot += ( i % 3 && i % 5 ) ? 0 : i;
	}

// alternate method	
/*	for( i=1; i<1000; i++){
		if( (i % 3 && i % 5) == 0 ){
			tot += i;
		}
	}*/

	printf("%d\n", tot);

	return 0;
}
