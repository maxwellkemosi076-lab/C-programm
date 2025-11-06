/*
Name: Maxwell Mokogi.
REG number:PA106/G/28786/25.
Description: The store sales in a day.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr;
	float amount, total_sales = 0.0;
	
	fptr = fopen("C:\\Users\\User\\Desktop\\c_proggramming\\sales.txt", "r");
	
	if(fptr ==NULL)
	{
		printf("File not found! \n");
		return 1;
	}
	
	while(fscanf(fptr , "%f" ,&amount) == 1)
	{
		total_sales += amount;
	}
	
	printf("Total sales for the day are: KSH%.2f \n", total_sales);
	
	fclose(fptr);
	
	return 0;
}