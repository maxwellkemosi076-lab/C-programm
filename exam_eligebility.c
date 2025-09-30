/*
Name: Maxwell Mokogi.
REG number: PA106/G/28786/25.
Description: Student final exam eligibility.
*/

#include <stdio.h>

int main()
{
	int attendance;
	int avarage_marks;
	
	//prompt for the percentage attendance 
	
	printf("What is the student's percentage attendance: \n");
	scanf("%d", & attendance);
	
	//prompt for avarage marks
	
	printf("What is the student's avarage marks: \n");
	scanf("%d", & avarage_marks);
	
	//checking eligibility
	if(attendance >= 75 && avarage_marks >= 40)
	{
		printf("You are eligible");
	}
	else
	{
		printf("Not eligible");
	}
	
	return 0;
}
