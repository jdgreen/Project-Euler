#include <stdio.h>

int main()
{
	int a,b,c,prod;

	for(a=1;a<1000;a++){
		for(b=1;b<1000;b++){
			if((a+b)*1000-a*b==500000){
				goto end;
			}
		}
	}
	end:
	prod = a*b*(1000-a-b);
	printf("%d\n",prod);
	return 0;
}