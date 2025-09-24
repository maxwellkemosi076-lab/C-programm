/*
Name: Maxwell Mokogi.
REG number:PA106/G/28786/25.
Description: Checking loan validity.
*/

#include <stdio.h>

int main()
{
    int age;
    double annual_income;

    //user input
    printf("What is your age: ");
    scanf("%d", & age);

    printf("What is your annual income in kenyan shillings: ");
    scanf("%lf" ,annual_income);

    //checking qualifications
    if (age>=21 && annual_income >= 21000)
    {
        printf (" Congratulations you qualify for a loan. \n");
    }
     else
     {
        printf("Unfortunately, we are unable to offer you a loan at this time. \n");
    }

    return 0;
}



