#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/*
 * This is my solution to Project Euler Problem 5. In this problem, the user
 * is asked to find the smallest positive number that is evenly divisibly by
 * all of the numbers from 1 to 20.
 */
int main(int argv, char *argc[])
{
	int i, j;
	int count;
	for(i = 1; i < 1000000000; i++){
		count = 0;
		for(j = 1; j < 21; j++){
			if(i%j == 0){
				count++;
			}
			else{
				break;
			}
		}
		if( count == 20){
			printf("\nThis is the smalest multiple: %d\n\n", i);
			break;
		}
	}	
}

