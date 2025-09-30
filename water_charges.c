/*
Name: Maxwell Mokogi.
REG number: PA106/G/28786/25.
Description: water company charges.
*/
 
#include <stdio.h>

int main()
{
	int water_units;
	float charges;
	
	//prompt for waterin units consumed by user 
	printf("Enter water units consumed:  \n");
	scanf("%d", & water_units);
	
	//calculating using water charges.
	if (water_units >0 && water_units <=30)
	{
		charges = water_units * 20;
	}
	else if(water_units > 31 && water_units <= 60)
	{
		   charges = water_units * 25;	
	}
	else 
	{
		charges = water_units * 30 ;
	}
	
	// show the total bill
	printf ("Total water bill: %.2f \n",charges );
	
	return 0;
}	   	
