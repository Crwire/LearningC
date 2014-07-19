#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Pointers to make an average of 10 integer inputs
*/

void calc_average(float, float *);

int main()
{
	//Variables
	float input, total;
	
	//Process
	for(int i = 1;i<=10;i++)
	{
		printf("Enter number: ");
		scanf("%f", &input);
		calc_average(input, &total);
	}
	
	printf("Your average is %0.2f\n", total/10);
}

void calc_average(float myint, float *r)
{
	static int count = 1;
	*r = *r + myint;
	printf("***Number %d entered!***\n", count);
	count++;
}