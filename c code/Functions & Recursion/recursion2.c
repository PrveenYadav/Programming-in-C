#include <stdio.h>

// Write a function to convert Celsius to Fahrenheit .

float convertTemp(float celsius);

int main()
{
    float far;
    printf("Enter the Celsius : ");
    scanf("%f", &far);

    printf("Converted Temperature in Fahrenhiet is : %f ", convertTemp(far));

    return 0;
}

float convertTemp(float celsius)
{
    float far = celsius * (9 / 5) + 32;
    return far;
}