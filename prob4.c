#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/*
 * This is my solution to Project Euler Problem 4. In this problem, the user
 * is asked to find the largest palindrome made from the product of two 3-digit
 * numbers. 
 */
int main(int argv, char *argc[])
{
	int a[6];
	int i, j, prod;
	int palindrome = 0;
	/*Run two for loops to compute the products of all 3 digit numbers*/
	for(i = 1; i < 1000; i++){
		for(j = 1; j < 1000; j++){
			prod = i*j; 
			/*Store 6th digit in the first array slot, 5th in the second, etc.*/
			a[5] = prod%10;
			a[4] = (prod%100 - a[5])/10;
			a[3] = (prod%1000 - a[4] -a[5])/100;
			a[2] = (prod%10000 - a[3] - a[4] - a[5])/1000;
			a[1] = (prod%100000 - a[2] - a[3] - a[4] - a[5])/10000;
			a[0] = (prod%1000000 - a[1]- a[2] - a[3] - a[4] - a[5])/100000;

			/*This checks if it is a palindrome */
			if((a[0] == a[5]) && (a[1] == a[4]) && (a[2] == a[3])){
				/*If the new found product that is a palindrome is larger
				  than our preexisting largest palindrome, replace it.*/
				if(palindrome < prod){
					palindrome = prod;
				}
			}
		}
	}
	printf("The largest palindrome made from the product of two 3-digit numbers is: %d \n", palindrome);
}

