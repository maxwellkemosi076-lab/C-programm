/*
Name: Maxwell Mokogi.
REG number:PA106/G/28786/25.
Description: Converting tempratures.
*/

#include <stdio.h>

// Function to convert Fahrenheit to Celsius

float Celsius(float fahrenheit)
 {
    float celsius;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

int main() 
{
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = Celsius(fahrenheit);

    printf(" \nTemperature in Celsius: %.2f°C\n", celsius);

    return 0;
}

