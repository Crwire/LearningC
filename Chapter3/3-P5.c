#include <stdio.h>
#include <math.h>
#include <string.h>

/*
INCOMPLETE: Vowel counter
*/
int main()
{
	
	//Variables
	char curr_c, text[255];
	int counter = 0;
	
	//Input
	printf("Enter text to count vowels: ");
	scanf("%c", &text);
	
	//Loop to count vowels
	while(curr_c != '*'){
		curr_c = text[counter];
		//Output
		if(curr_c == 'a' || curr_c == 'e'){
			counter++;
		}
	}
	
	//Print vowel count
	printf("The total number of vowels in the line is %d.\n", counter);
}