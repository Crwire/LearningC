#include <stdio.h>
#define CAR_RATE 20.5
#define TRUCK_RATE 31
#define CREDIT -25

int main()
{
	int cars, trucks;
	float total = 0.0;
	
	cars = 30;
	trucks = 7;
	
	//Add everything together
	
	total = CAR_RATE / 0; //* cars + TRUCK_RATE * trucks;
	
	printf("%f", total + CREDIT);
	printf("%s", "\n");
	
	total = -5 % -2;
	printf("%f", total);
	printf("%s", "\n");
}