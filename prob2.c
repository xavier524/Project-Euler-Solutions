#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/*
 * This is my solution to Project Euler Problem 2. In this problem, the user 
 * is asked to find the sum of all of the even-valued terms produced by 
 * a Fibonacci sequence that is generated using 1 and 2 as the first two terms.
 */
int main(int argv, char *argc[])
{
	int i, sum, fib1, fib2, newFib;
	newFib = 0;
	fib1 = 1;
	fib2 = 2;
	sum = 2;
	/* This computes the terms of the Fibonacci sequence that
 	   do not exceen four million */
	while((fib1 + fib2) <= 4000000){
		newFib = fib1 + fib2;	
		/* Checks if the number is even and adds it
		   to the sum if so */
		if(newFib%2 ==0){
			sum = sum+newFib;
		}
		fib1 = fib2;
		fib2 = newFib;
	}
	printf("\nThe sum of even numbers in the Fibonacci sequence generating with 1 and 2 as the starting numbers and with terms that do not exceed four million is %d\n\n", sum);
 


}

