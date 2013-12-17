#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define NUM_DIGITS 3

int palin(char num[])
{
	int i, len=strlen(num);
	for(i=0;i<len/2;i++) if(num[i] != num[len-1-i]) return 0;
	return 1;
}

int main()
{
	int out,i,dig=NUM_DIGITS,fact;
	char num[dig*2+1];

	for(i=(int)pow(10,dig*2)-1;i>=100;i--)
	{
		sprintf(num, "%d", i);
		if(palin(num) == 1)
		{
			for(fact=999;fact>=100;fact--)
			{
				if(i % fact == 0)
				{
					if((i/(fact*(int)pow(10,dig)) == 0) && (i/(fact*(int)pow(10,dig)/10)))
					{
						printf("%d\n", i);
						exit(0);
					}
					else break;
				}
			}
		}
	}
	exit(0);
}