#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/*
 * This is my solution to Problem 7 of Project Euler. This problem asks
 * for the 10,001st prime number.
 */
int main(int argv, char *argc[])
{
	int i, j, count, count2;
	count2 = 0;

	/*The bound in this for loop is arbitrary; I picked a multiple of 10 
	  and kept adding 0's to it until I found a good bound that let me 
	  find the number I was looking for.*/
	for(i = 2; i < 10000000; i++){
		count = 0;
		/* Case where the number is 2*/
		if(i == 2){
			count2++;
		}
		/* Case where the number is not even */
		else if(i%2 != 0){
			for(j = 1; j < i; j+= 2){
				/* Check if number is divisible by odd number that comes before it*/
				if((i%j ==0) &&(j != 1)){
					count = 1;
				}
			}
			if(count == 0){
				count2++;
				if(count2 == 10001){
					printf("\nThe 10001st prime number is %d\n\n", i);
					break;
				}	
			}
		}

	}
}

