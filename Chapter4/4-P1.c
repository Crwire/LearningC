#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Converts input times into seconds.
Input - HH MM SS
*/

int convert(int, int, int);

int main()
{
	//Variables
	int hours, minutes, seconds;
	
	//Process
	printf("Please enter HH MM SS: ");
	scanf("%d %d %d", &hours, &minutes, &seconds);
	printf("%d:%d:%d is %d seconds.\n", hours, minutes, seconds, convert(hours, minutes, seconds));
}

int convert(int h, int m, int s)
{
	int total;
	//Process the times
	total = s;
	total = total + m*60;
	total = total + (h*60*60);
	return(total);
}