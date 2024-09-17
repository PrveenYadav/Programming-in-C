#include <stdio.h>

void printHW(int count);

int main()
{
    printHW(10);

    return 0;
}

// Recursive Function
void printHW(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello World \n");
    printHW(count - 1);
}

// Note - sum of n = sum(n - 1) + n
// factorial of n = fact(n - 1) * n

int sum(int n);

int main()
{
    printf("sum is : %d", sum(5));
    return 0;
}

// Recursive Function
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int sumNm1 = sum(n - 1); // sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}


// Que - Write a Function to convert celcius to fahrenheit.
// formula =>  f = (*9/5)+32

float convertTemp(float celcius);

int main()
{
    float far = convertTemp(38);
    printf("far : %f", far);
    return 0;
}

float convertTemp(float celcius)
{
    float far = celcius * (9.0 / 5.0) + 32;
    return far;
}

// Que - Write a function to calculate percentage of a student from his 5 subjects (PCM HE).

int calcPercentage(int physics, int math, int hindi, int eng, int chem);

int main()
{
    int physics = 65;
    int math = 44;
    int hindi = 91;
    int eng = 77;
    int chem = 54;

    printf("percentage is : %d", calcPercentage(physics, math, hindi, eng, chem));
    return 0;
}

int calcPercentage(int physics, int math, int hindi, int eng, int chem)
{
    return ((physics + math + hindi + eng + chem) / 5);
}

// Que - Write a function to print n terms of fibonacci sequence.
// Exa = 0 1 1 2 3 5 8 13 21 . . .

int fibonacci(int n);

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Fibonacci series : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}