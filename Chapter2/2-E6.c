#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Demonstrates that scan ends reading after encountering illegal values.
*/
int main()
{
	//Variables
	int a;
	
	//Process
	scanf("%d", &a); //input 537J
	printf("%d \n", a);
}