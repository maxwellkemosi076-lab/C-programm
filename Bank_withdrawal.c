/*
Name: Maxwell Mokogi.
REG number:PA106/G/28786/25.
Description: Bank withdrawal.
*/

#include <stdio.h>

int main()
{
	float balance, withdrawal;
	
	printf("Enter account balance:");
	scanf("%f" , & balance);
	printf ("\n Your balance is: %.2f \n",balance );
	
	while(balance > 0)
	{
		   printf("\n How much do you want to withdraw: " );
		   scanf("%f", & withdrawal);
		   
		   balance -= withdrawal;
		   
		   printf("\n Your remaining balance is: %.2f \n" , balance );	
	}
	
	return 0;
}
