/*
Name: Maxwell Mokogi.
REG number:PA106/G/28786/25.
Description: Weekly revenue tracker.
*/
#include <stdio.h>

int main()
{
    // Array to store revenue for 7 days
    int revenue[7];
    
    // Input the values for each day
    printf("Enter 7 daily revenues received:\n");
    
    printf("\nMonday: ");
    scanf("%d", &revenue[0]);
    
    printf("Tuesday: ");
    scanf("%d", &revenue[1]);
    
    printf("Wednesday: ");
    scanf("%d", &revenue[2]);
    
    printf("Thursday: ");
    scanf("%d", &revenue[3]);
    
    printf("Friday: ");
    scanf("%d", &revenue[4]);
    
    printf("Saturday: ");
    scanf("%d", &revenue[5]);
    
    printf("Sunday: ");
    scanf("%d", &revenue[6]);
    
    // Calculate total revenue using a while loop
    int total = 0;
    int i = 0;
    while (i < 7) {
        total += revenue[i];
        i++;
    }
    
    // Calculate average revenue
    float average = total / 7.0;
    
    // Display the total and average revenue
    printf("\nTotal revenue for the week: %d\n", total);
    printf("Average daily revenue: %.2f\n", average);
    
    return 0;
}

