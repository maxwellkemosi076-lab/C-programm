/*
Name: Maxwell Mokogi.
REG number:PA106/G/28786/25.
Description: Room occupancy  .
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	   int occupancy [5][10];
	   int i,j;
	   
	   srand(time(0));
	   
	   for (i = 0; i <5;i++)
	   {
	   	for(j = 0;j <10; j++)
		   {
		   	occupancy[i][j] = rand() %2;
		   }
	   }
	   
	  for(i = 0;i < 5; i++)
	  {
	  	int occupied = 0; 
	  	int vacant = 0 ; 
	  	
	  	for (j = 0;j <10; j++)
		  {
		  	if (occupancy[i][j] == 1)
		  		occupied++;
		  	else
			  {
			  	vacant++;
			  }
			  
		  }
		   printf("Floor %d : Occupied = %d, Vacant = %d\n" , i + 1 ,occupied , vacant);	
	  } 
	  
	  
	return 0;
}