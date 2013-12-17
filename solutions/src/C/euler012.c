#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int i,j,m;
	int tot=1000000,tri=0;
	while(i<=tot){
		m=0;
		tri += i;
		//printf("%d ",tri);
		for(j=1;j<=tri;j++){
			if(tri%j == 0){
				//printf("%d ",m);
				m++;
			}
		//printf("%d ",m);
		}
		if(m > 500){
			goto end;
		}
		//printf("%d ",i);
		if(i>tot){
			break;
		}
		i++;
		printf("%d ",tri);
	}
	end:
	printf("\nThe triangle number with %d factors is: %d\n",m,tri);
	printf("%d ",i);
	return 0;
}