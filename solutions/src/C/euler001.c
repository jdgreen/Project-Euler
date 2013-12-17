#include <stdio.h>

int main()
{
	int i=2;
	long int sum[400000]={400000, 0};
	sum[0] = 1;
	sum[1] = 2;
	long int tot = 2;

	while(sum[i] < 4000000)
	{
		sum[i] = sum[i-1] + sum[i-2];
		if(sum[i] > 4000000)
		{
			 break;
		}
		if(sum[i] % 2 == 0 ) {
			tot += sum[i];
		}
		i++;
	}

	printf("%ld ",tot);
	return 0;
}