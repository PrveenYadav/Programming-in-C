#include <stdio.h>
#include <math.h>

// que - Write a function to calculate area of a square, a circle & a rectangle.

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main()
{
    float a = 5.0;
    float b = 10.0;

    printf("area is : %f", rectangleArea(a, b));

    return 0;
}

float squareArea(float side)
{
    return side * side;
}
float circleArea(float rad)
{
    return 3.14 * rad * rad;
}
float rectangleArea(float a, float b)
{
    return a * b;
}