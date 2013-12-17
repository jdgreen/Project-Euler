#include <stdio.h>

int main()
{
	int i,k,m=0;
	int j=1;
	int prime[10001];
	//int diff;

	for(i=2;j<= 10001;i++)
	{
		for(k=i-1;k>1;k--){
			m=0;
			if(i%k==0){
				m=1;
				break;
			}
		}
		if(m==0){
			prime[j] = i;
			printf("%d:%d\n",prime[j], j);
			j++;
		}
	}
	return 0;
}