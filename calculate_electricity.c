/*
Name: Maxwell Mokogi.
REG number:PA106/G/28786/25.
Description: Calculating electricity bills.
*/

#include <stdio.h>

// Function to calculate the total bill 
int total_bill(int units)
 {
    int bill = 0;

    if (units <= 100) 
	{
        bill = units * 10;
    } 
	else if (units <= 200)
	 {
        bill = (100 * 10) + ((units - 100) * 15);
    } 
	else
	 {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() 
{
    int units, bill;

    printf("What are the number of units consumed? ");
    scanf("%d", &units);

    bill = total_bill(units);

    printf("\nYour total Electric bill is : KSH %d\n", bill);

    return 0;
}
