/*
Name: Maxwell Mokogi.
REG number:PA106/G/28786/25.
Description: Calculating fare.
*/
#include <stdio.h>

// Function to calculate total fare
int fare(int distance)
{
    int total_fare = 0;
    total_fare = distance * 50;
    return total_fare;
}

int main()
{
    int distance, total_fare;

    printf("What distance in kilometers have you travelled? ");
    scanf("%d", &distance);

    total_fare = fare(distance);

    printf("\nYour total fare is: KSH %d\n", total_fare);

    return 0;
}
