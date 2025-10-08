/*
Name: Maxwell Mokogi.
REG number:PA106/G/28786/25.
Description: Number Guessing Game.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int secret_number, guess ,attempts = 0 ;

    
    srand(time(0));

    
    secret_number = (rand() % 20) + 1;

    
    while (1)  
	{
        printf("What is your guess (1 to 20): ");
        scanf("%d", & guess);
        
        attempts++; 

        if (guess > secret_number)
		{
            printf(" \nToo high \n");
        } 
		else if (guess < secret_number) 
		{
            printf(" \nToo low  \n");
        } 
		else 
		{
            printf("\nCongratulations  You guessed the number.\n");
             printf("\nTotal attempts: %d\n", attempts);
            break; 
        }
    }

    return 0;
}
