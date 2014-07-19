#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Working with the 2D array
*/

int main()
{
	//Variables
	char *cars[3] = {"FORD", "MITSUBISHI", "DODGE"};
	
	//Process
	printf("%s \n", cars[1]); //should be mitsubishi
	printf("%c \n", cars[1][2]); //should be T
	printf("%c \n", *cars[1]); //should be O
	printf("%p \n", cars);
	printf("%p, %p, %p \n", cars[0], cars[1], cars[2]);
}