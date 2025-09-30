/*
Name: Maxwell Mokogi.
REG number: PA106/G/28786/25.
Description: mobile data purchasing.
*/

#include <stdio.h>

int main()
{
	int data_choice;
	
	//display the mobile data menu
	
	printf("The below are the mobile data choices \n");
	printf("1. 100MB @ 50 KES \n");
	printf("2. 500MB @ 200 KES \n");
	printf("3. 1GB @ 350 KES \n");
	printf("4. 2GB @ 600KES \n");
	
	//prompt user to enter their choice 
	
	printf("\n Which is your preffered data choice (1-4):  ");
	scanf("%d", & data_choice);
	
	//using switch to display the data choice
	
	switch(data_choice)
	{
	case 1:
		printf("\n You selected 100MB. Cost = 50 KES");
		break;
	case 2:
		printf("\n You selected 500MB. Cost = 200 KES");
		break;
	case 3:
		printf("\n You selected 1GB. Cost = 350 KES");
		break;
	case 4:
		printf("\n You selected 2GB. Cost = 600 KES");
		break;
	default:
		printf("\n Invalid choice");
		break;
	}
	return 0;
}