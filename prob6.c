#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/*
 * This is my solution to Project Euler Problem 6. In This problem, the user is asked
 * to find the difference between the sum of squares and the square of the sum of the
 * first one hundred natural numbers.
 */
int main(int argv, char *argc[])
{	
	int sum_squared = 0;
	int squared_sum = 0;
	int i, diff;

	for(i = 1; i < 101; i++){
		sum_squared = sum_squared + (i*i);
		squared_sum = squared_sum + i;
	}
	squared_sum = squared_sum*squared_sum;
	diff = squared_sum - sum_squared;
	printf("\nFor the first one hundred natural numbers, the sum of squares is %d and the square of sums is %d. Their difference is %d .\n\n", sum_squared, squared_sum, diff);
}
