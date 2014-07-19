#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Temperature converter: C or K to F with looping
*/
int main()
{
	
	//Variables
	float temp, tfarenheight;
	char temp_sys;
	
	do{
		//Input
		printf("Enter temperature: ");
		scanf("%f %c", &temp, &temp_sys);
		//Output
		if(temp_sys == 'k' || temp_sys == 'K'){
			tfarenheight = (temp - 273.15)*1.8 + 32;
			printf("The temperature of %.2fK is %.2fF.\n",temp,tfarenheight);
		}
		else if(temp_sys == 'c' || temp_sys == 'C'){
			tfarenheight = temp * 9/5 + 32;
			printf("The temperature of %.0fC is %.0fF.\n",temp,tfarenheight);
		}
		else{
			printf("I'm sorry, what temperature is that..?\n");
		}
	}while(temp != 9999);
	/*
	switch(i){
		case 1: printf("Good choice.\n");
				break;
		case 2: printf("Have a nice day.\n");
				break;
		case 3: printf("Change your oil.\n");
				break;
		case 4: printf("Cheers!\n");
				break;
		default: printf("That's not a choice...\n");
	}*/
}