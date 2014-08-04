#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libgen.h>
#include <math.h>

// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 99.

// Find the largest palindrome made from the product of two 3-digit numbers.

#define LINE "___________________________"
#define TITLE "Project Euler: Problem #4"
#define AUTHOR "Green"
#define PROB "Find the largest \n \t palindrome made from the \n \t product of two 3-digit \n \t numbers."
#define PALIN 9001099
#define DIGITS 3
#define NUM_DIGITS 3

// palindrome checker outputting boolean logic

int palin(char ipt[]){

	// check palindrome validity
	for(int i=0; i<strlen(ipt)/2; i++){
		if(ipt[i] != ipt[strlen(ipt)-1-i]) return 0;
	}
	return 1;
}

int length(int num){
	int power = 1;
	while(power >= 1){
		if ( num < pow(10,power)) return power;
		power += 1;
	}
}

int main(int argc, char const *argv[])
{
	int i, found=0;
	char num[DIGITS*2+1];

	// counting down from the highest possible value
	for ( i = (int) pow(10,DIGITS*2)-1; i > (int) pow(10,(DIGITS-1)*2); i-- ){

		// check whether palendrome
		sprintf(num, "%d", i);
		if ( palin(num) == 0 ) {
			continue;
		}
		// counting down from highest possible factor, determine whether other factor is three digits
		for ( int a = (int) pow(10,DIGITS)-1; a >= (int) pow(10,DIGITS-1); a-- ){
			if ( (i % a == 0) && (length(i/a) == DIGITS) ) {
				found = 1;
				break;
			}
		}
		if (found == 1) break;}
			
	printf("\n \t %s \n \t %s \n \t %s \n \t %s \n", LINE, TITLE, AUTHOR, LINE);
	printf("\t %s \n \t %s \n", PROB, LINE);
	printf("\t %d\n\n", i);
	return 0;
}
