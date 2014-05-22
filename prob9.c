#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <strings.h>

/*
 * This is my solution to Problem 9 of Project Euler. In this problem, the user
 * is asked to find a Pythagorean triplet for which a+b+c = 1000. 
 */
int main(int argv, char *argc[])
{
	int a, b, c, prod;
	int i,j;

	/*The two for-loops find all values for a, b, and c for which their sum
	  is 1000. */ 
	for(i = 1000; i > 0; i--){
		c = i;
		for(j = 1000 - c; j >= 0; j--){
			b = j;
			a = 1000 - c - b;
			/* This is the case where the three values we found satisfy
			   the definition of a Pythagorean triplet. */
			if(((a*a + b*b) == (c*c)) && (a<b && b<c)){
				prod = a*b*c;
				printf("\nFound a Pythagorean triplet: %d, %d, and %d. Their product is: %d.\n", a, b, c, prod);
				/* No point in continuing execution of the code after we found
			           the solution. */
				exit(1);
			}
		}
	}
}

