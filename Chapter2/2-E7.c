#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Demonstrates that scan ends reading after encountering illegal values.
*/
int main()
{
	
	//Variables
	int i;
	char ch;
	
	/* 
	part i: int then char
	//Process
	scanf("%d %c", &i, &ch); //input 537J
	printf("%d and %c", i, ch);
	*/
	
	//Process
	scanf("%c %d", &ch, &i);
	printf("%c and %d", ch, i);
}