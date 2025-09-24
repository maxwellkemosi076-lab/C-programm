/*
Name: Maxwell Mokogi.
REG number: PA106/G/28786/25.
Description: Finding surface area and volume of a cylinder.
*/

#include <stdio.h>

#define PI 3.142  // Defining constant value for π

int main()
{
    double radius;
    double height;
    double surface_area;
    double volume;

    // Prompt the user for radius
    printf("What is the radius of the cylinder (in cm): ");
    scanf("%lf", &radius);

    // Prompt the user for height
    printf("What is the height of the cylinder (in cm): ");
    scanf("%lf", &height);

    // Calculate the surface area
    surface_area = (2 * PI * radius * radius) + (2 * PI * radius * height);
    printf("\nSurface area of the cylinder is: %.2f \n", surface_area);

    // Calculate the volume
    volume = PI * radius * radius * height;
    printf("Volume of the cylinder is: %.2f \n", volume);

    return 0;
}
