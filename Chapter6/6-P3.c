#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Sort 15 ints by size, then multiply the two biggest ones
*/
void rearrange(int*);

int main()
{
	//Variables
	int input[15]; //= {15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 1, 2, 3, 4};
	
	//Process
	printf("Enter 15 integers: \n");
	for(int x = 1;x<=15;x++)
	{
		printf("Int %d: ", x);
		scanf("%d", &input[x-1]);
		
	}
	rearrange(input);
	//Multiply and print two largest ones
	printf("Largest ints entered are %d and %d.\n", input[13], input[14]);
	printf("Product is: %d.\n", input[13]*input[14]);
}

void rearrange(int* array) //perhaps change to a while loop...
{
	for(int i = 0;i<15;i++) //cycle through the array
	{
		int lowest = i;
		int j = i+1;
		//Find lowest value in subsequent items
		for(;j<15;j++)
		{
			if (array[j] < array[i] && array[j] < array[lowest])
			{
				lowest = j;
			}
			//printf("\n%d: Array[%d] is %d, lower than %d.", i+1, lowest, array[lowest], array[i]);
		}
		//Swap values
		if(array[lowest] <= array[i])
		{
			int a = array[i]; //copy floor to mem
			array[i] = array[lowest]; //floor now is lowest
			array[lowest] = a; //replace lowest with prev floor
		}
	}
}