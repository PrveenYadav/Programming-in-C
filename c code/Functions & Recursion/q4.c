#include <stdio.h>
#include <math.h> // library for maths

// Write a function to calculate area of a square , a circle & a rectangle.

float areaOfSquare(float side);
float areaOfCircle(float radius);
float areaOfRectangle(float a, float b);

int main()
{
    float a, b;
    printf("Enter the sides: ");
    scanf("%f %f", &a, &b);
    printf("Area is %f \n", areaOfRectangle(a, b));

    // float side;
    // printf("Enter the side: ");
    // scanf("%f", &side);
    // printf("Area is %f \n", areaOfSquare(side));

    // float radius;
    // printf("Enter the radius: ");
    // scanf("%f", &radius);
    // printf("Area is %f \n", areaOfCircle(radius));

    return 0;
}

float areaOfSquare(float side)
{
    return side * side;
}

float areaOfCircle(float radius)
{

    return 3.14 * radius * radius;
}

float areaOfRectangle(float a, float b)
{
    return a * b;
}