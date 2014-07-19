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

int main()
{
	//Variables
	char input[11];
	bool palin;
	
	//Process
	while(strcmp(input, "end"))
	{
		//get some input
		printf("Pleae enter a word to PalinCheck: ");
		scanf("%s", input);
		
		//process depending on odd or even characters
		if(check_length(input) % 2 == 0) //even
		{
			int l = check_length(input);
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
		else //odd
		{
			int l = check_length(input);
			for(int i = 0;i<(l-1)/2;i++)
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
}

int check_length(char* c)
{
	int length = 0;
	for(int i = 0;i<=11;i++)
	{
		if(c[i] == '\0')
		{
			length = i;
			break;
		}
	}
	return(length);
}