#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/*
 * This is my solution to Project Euler Problem 1. In this problem, the user
 * is asked to find the sum of all the multiples of 3 or 5 below 1000.
 */
int main(int argv, char *argc[])
{
	int sum = 0;
	int i;
	for(i = 0; i < 1000; i++){
		if((i%3 == 0) || (i%5 == 0)){
			sum += i;
		}
	}
	printf("\nThe sum of multiples of 3 or 5 below 1000 is %d\n\n", sum);	

}

