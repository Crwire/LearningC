#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Playing with functions
*/

int fun(int);

int main()
{
	int a = 4;
	fun(3+5*a); //You can basically put anything into the input
}

int fun(int x){
	int z;
	z = x + 5;
	printf("%d is the value of z.\n", z);
	return z;
}