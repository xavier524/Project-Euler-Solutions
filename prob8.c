#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <strings.h>

/*
 * This is my solution to Problem 8 of Project Euler. In this problem, you are given a 
 * 1000-digit number and are asked to compute the greatest product of thirteen 
 * adjacent digits in said number.
 */
int main(int argv, char *argc[])
{
	int tempint;
	char* number [10];
	int c, num, count, i, j;
	/*Problem I had initially was I tried storing gprod and tempprod in an int,
	  which wasn't large enough. Using a long long solved the problem.*/
	long long gprod, tempprod;
	int array[1000];

	count = 0;
	gprod = 0;

	/*Instead of copying and pasting the number from the site and then manually making
	  the array that stores each digit, I created a text file with the number stored
	  in it then read it and put each digit into the array as it was read in. */
	FILE* file = fopen("number" , "r");
	if(file == NULL){
		printf("\nerror\n");
	}
	else{
		do{
			c = fgetc(file);
			num = c - '0';
			array[count] = num;
			count++;
			if(count == 1000){
				break;
			}
		} while( c != EOF);
		fclose(file);
	}

	/*Here, I compute the product of each sequence of 13 adjacent digits. The largest
	  product gets stored in gprod.*/
	for(i = 0; i < 1000-13; i++){
		tempprod = 1;
		for(j = 0; j < 13; j++){
			tempprod = tempprod*array[i+j];
		} 
		if( tempprod > gprod){
			gprod = tempprod;
		}
	}

	printf("\nThe greatest product of four adjacent digits in the 1000-digit number is: %lld\n\n", gprod);
}

