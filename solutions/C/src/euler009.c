#include <stdio.h>

// There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.

#define TOT 1000

int main(int argc, char const *argv[])
{
	int a=TOT-2, b, c, sol=0, prod;

	while( (sol == 0) && (a > 0) ){
		b=TOT-2;
		while( (sol == 0) && (b > 0) ){
			sol = ( a*a + b*b == (1000-b-a)*(1000-b-a) ) ? 1 : 0;
			b--;
		}
		a--;
	}
	a++; b++;
	printf("%d\n", a*b*(1000-a-b));
	return 0;
}