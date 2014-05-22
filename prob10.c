#include <stdio.h>
#include <math.h>

/*
 * This is my solution to Problem 10 of Project Euler. This problem asks
 * for the sum of all the primes below two million.
 */
int main(int argv, char *argc[])
{
	long long i, j, count, sum;
	sum = 0;

	/*The bound in this for loop is arbitrary; I picked a multiple of 10 
	  and kept adding 0's to it until I found a good bound that let me 
	  find the number I was looking for.*/
	for(i = 2; i < 2000000; i++){
		count = 0;
		/* Case where the number is 2*/
		if(i == 2){
			sum += i;
		}
		/* Case where the number is not even */
		else if(i%2 != 0){
			for(j = 2; j <= sqrt(i) ; j++){
				/* Check if number is divisible any number from 2 
				   to the square root of the number in question.
				   The idea of bounding the loop by the sqrt(i) 
			   	   instead of i itself as in my previous solutions
				   was one given to me on Stack Overflow. */
				if((i%j ==0)){
					count = 1;
				}
			}
			if(count == 0){
				sum += i;
			}	
		}
	}

	printf("\n The sum of primes under 2000000 is: %lld \n", sum);
}

