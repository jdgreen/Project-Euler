#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?

#define FILENAME "Development/euler/data/euler008.data"
#define NUM_DIG 1000
#define CNT_DIG 13

//function to compute the base number of a given integer value
int base_num( int num){
	int diff=0, buf=num;
	while( buf >= 0){
		buf -= 10;
		diff++;
	}
	return num-(diff-1)*10;
}

int main()
{
	//declare file pointer and open it
	FILE *file;
	file = fopen(FILENAME, "r");

	if( file != NULL )
	{
		//declare variables, random seeding and pointers
		int i=0, next, *num, buffer, *tot, start;
		int buf, carry, *result;


		//allocate memory
		num = (int*) malloc( NUM_DIG*sizeof(int) );
		result = (int*) calloc( CNT_DIG, sizeof(int) );
		tot = (int*) calloc( CNT_DIG, sizeof(int) );

		//read number into array
		while(1){
			next = (int)fgetc(file);
			if( next != EOF ){
				num[i] = next-48;
				i++;
			}
			else break;
		}

		//process consecutive digit values
		for( i=0; i <= NUM_DIG-CNT_DIG ; i++ ){
			buffer = 1;
			carry = 0;

			//reset result array
			for( int a=0; a < CNT_DIG-1; a++){
				result[a] = 0;
			}
			result[CNT_DIG-1] = 1;			

			for( int count=0; count < CNT_DIG; count++){
				//for each value, consider the whole of the results array
				for( int a=CNT_DIG; a>=0; a--){
					buf = result[a]*num[i+count];

					//update current result value
					result[a] = base_num(carry + buf);
					
					//update carry through
					carry = (int) (buf+carry)/10;
				}
			}
			//work out the largest product
			for( int a=0; a < CNT_DIG; a++){
				if(result[a] > tot[a]){
					for( int b=0; b < CNT_DIG; b++){
						tot[b] = result[b];
					}
					break;
				}
				if(result[a] < tot[a]) break;
			}
		}
		//get rid of the zeros at the start of the array if present
		for( int i=0; i < CNT_DIG; i++){
			if( tot[i] != 0) {
				start = i;
				break;
			} 
		}		
		for( int i=start; i < CNT_DIG; i++){
			printf("%d", tot[i]);
		}
		printf("\n");

		//free memory and close opened files
		free(num);
		free(tot);
		free(result);
		fclose(file);
		return 0;
	}
	else
	{
		printf("Unable to open file for reading.\n");
		perror ("Error");
		return 1;
	}
}