/*
Name: Maxwell Mokogi.
REG number:PA106/G/28786/25.
Description: Keeping track of books borrowed daily.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fptr;
	
	char input [1000];
	int line_number = 1;
	char ch;
	
	
	fptr = fopen("C:\\Users\\User\\Desktop\\c_proggramming\\borrowed_books.txt" , "a+");
	
	if (fptr == NULL)
	{
		printf("
		");
		return 1;
	}
	
	while((ch = fgetc(fptr)) != EOF)
	{
		if (ch == '\n')
			line_number++;
	}
	
	printf("What is the  title of the borrowed book (press enter when done) :\n> ");
	fgets(input , sizeof(input),stdin);
	
	input[strcspn(input ,"\n")] = 0;
	
	fprintf(fptr, "%d. %s\n" ,line_number, input);
	fclose(fptr);
	
	
	printf("The enterd information has been succecfully stored. Have a nice day");
	
	return 0;
}