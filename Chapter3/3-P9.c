#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Digit counter of an integer
*/
int main()
{
	
	//Variables
	int input, test;
	int digits = 0;
	int counter = 1;
	int multiplier = 1;
	
	//Loop the digit counter
	while(input != 13034421){
		//Input
		printf("Enter an integer: ");
		scanf("%d", &input);
	
		//Loop to count vowels
		while(digits == 0){
			test = input - 10 * multiplier;
			if(test < 0){
				digits = counter;
				break;
			}
			counter++;
			multiplier = multiplier * 10;
		}
	
		//Print digits counted
		printf("Digits in %d is %d.\n", input, digits);
		digits = 0; counter = 1; multiplier = 1;
	}
}