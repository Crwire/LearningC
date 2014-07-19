#include <stdio.h>
#include <math.h>
#include <string.h>
typedef int bool;
#define true 1
#define false 0

/*
Palindrome checker
*/
int check_length(char*);
void remove_spaces(char*, int);

int main()
{
	//Variables
	char input[256];
	bool palin;
	
	//Process
	while(strcmp(input, "end"))
	{
		//get some input
		printf("Please enter a word to PalinCheck: ");
		scanf("%s", input);
		
		//can't assign with spaces so check 6-P2 copy for solution
		*input = "gay afasdfsd sfsd fs";
		//testing remove spaces
		printf("%s\n", input);
		remove_spaces(input, check_length(input));
		printf("%s \n", input);
		
		//process depending on odd or even characters
		int l;
		if(check_length(input) % 2 == 0) //even
		{
			l = check_length(input);
		}
		else //odd - needs fixing
		{
			l = check_length(input) - 1;
		}
			for(int i = 0;i<l/2;i++)
			{
				char a, b;
				a = input[i];
				b = input[l-(i+1)];
				if(a != b)
				{
					palin = false;
					break;
				}
				else{ palin = true; }
			}
			if(palin)
			{
				printf("Palindrome\n");
			}
			else if (!palin)
			{
				printf("Not palindrome\n");
			}
	}
}

int check_length(char* c)
{
	int length = 0;
	for(int i = 0;i<=256;i++)
	{
		if(c[i] == '\0')
		{
			length = i;
			break;
		}
	}
	return(length);
}

void remove_spaces(char* c, int l)
{
	for(int i = 1;i<l;i++) //cycle through the array
	{
		/* whilst current value is a space, shift the values
		down one space */
		while(c[i] == 32)
		{
			int j = i;
			for(;j<l-1;j++)
			{
				c[j] = c[j+1];
			}
		}
	}
}