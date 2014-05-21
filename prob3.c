#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/*
 * This is my solution to Project Euler Problem 3. In this problem, the user
 * is asked to find the largest prime factor of the number 600851475143.
 */
int main(int argv, char *argc[])
{
	long long num = 600851475143;
	int i, j, count, largest_prime;

	for(i = 2; i < 1000000000; i++){
		count = 0;
		if( num % i == 0){
			/* This loop makes sure that i is not evenly divided
			   by any of the previous numbers. */
			for(j = 2; j < i; j++){
				if(i%j == 0){
					count = 1;
					break;
				}
			}
			/* Keeps track of the largest prime factor */
			if(count == 0){
				largest_prime = i;
			}
		}
	}
	printf("\n The largest prime factor of the number 600851475143 is %d\n\n", largest_prime);
}

