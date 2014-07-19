#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Converts lowercase char to uppercase
Rounds a number to the nearest 100
Converts a numerical score to a grade
*/

char convert(char);
int doround(int);
char grade(int);

int main()
{
	//Variables
	char input;
	int p3input, score;
	
	//Process
	printf("Enter your score: ");
	scanf("%d", &score);
	printf("That would be a grade %c.\n", grade(score));
	
	/* 
	P3 output
	printf("Please enter a number: ");
	scanf("%d", &p3input);
	printf("That would be %d.\n", doround(p3input));
	*/
}

//P9 function
char grade(int x)
{
	char result;
	//if not a real score
	if(x>100 || x <0) 
	{
		result = 'U';
		return (result);
	}	
	
	//else calculate grade
	switch(x/10)
	{
		case 10:
		case 9: result = 'A';
				break;
		case 8: result = 'B';
				break;
		case 7: result = 'C';
				break;
		case 6: result = 'D';
				break;
		default: result = 'F';
	}
	return (result);
}
//P3 function
int doround(int x)
{
	int result, remains;
	
	remains = x % 100; //get the remainder
	if(remains >= 50) //pre rounding
	{
		result++;
	}
	result = result + ((x-remains) / 100); //find # of 100's left
	
	return(result*100);
}
//P2 function
char convert(char c)
{
	int output = 'A';
	int asci = c;
	//Process the times
	if (asci > 96 && asci < 123)
	{
		output = asci - 32;
	}
	else
	{
		output = '?';
	}
	return(output);
}