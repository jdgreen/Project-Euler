#include <stdio.h>

int main()
{
	int i;
	int nat=0,sqr=0;
	int diff;

	for(i = 1; i <= 100; i++)
	{
		nat += i*i;
		sqr += i;
	}
	printf("%d\n",nat);
	printf("%d\n",sqr*sqr);
	diff = sqr*sqr-nat;
	printf("%d\n",diff);
	return 0;
}