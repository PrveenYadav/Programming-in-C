#include <stdio.h>

int main()
{
    int age = 22;

    int *ptr = &age; // like this char *ptr and float *ptr
    int _age = *ptr;

    printf("%d", _age);
    return 0;
}

// Note =>
//  & = address of a pointer
//  * = value of a pointer

// Practice Qwe - Pointer
int main()
{
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    printf(" x = %d \n", x);
    printf(" *ptr = %d \n", *ptr);

    *ptr += 5;
    printf(" x = %d \n", x);
    printf(" *ptr = %d \n", *ptr);

    (*ptr)++;
    printf(" x = %d \n", x);
    printf(" *ptr = %d \n", *ptr);

    return 0;
}

// pointer to pointer
int main()
{
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d \n", **pptr);

    return 0;
}

// Print the square using call by value & call by reference
void square(int n);
void _square(int *n);

int main()
{
    int number = 4;
    square(number);
    printf("number = %d \n", number);

    _square(&number);
    printf("number = %d \n", number);

    return 0;
}

// call by Value
void square(int n)
{
    n = n * n;
    printf("square = %d \n", n);
}

// call by Refference
void _square(int *n)
{ // *n because it's pointer
    *n = (*n) * (*n);
    printf("square = %d \n", *n);
}

// Qwe - Swap(interchange/exchange) 2 numbers, a & b.
void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int x = 3, y = 5;
    swap(x, y);
    printf("a = %d & b = %d \n", x, y);

    // call by refference
    _swap(&x, &y);
    printf("a = %d & b = %d \n", x, y);

    return 0;
}

// call by refference
void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// call by value
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d \n", a, b);
}

// Que - Write a function to calculate the sum(a+b), product(a*b) & average(a+b/2) of two numbers. Print that average in main function.

// Note =>
//  Functions = can return only one value
//  Pointers = can return multiple values

void dowork(int a, int b, int *sum, int *prod, int *avg);

int main()
{
    int a, b;
    printf("enter the number : ");
    scanf("%d", &a);

    printf("enter the number : ");
    scanf("%d", &b);

    int sum, prod, avg;
    dowork(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d \n", sum, prod, avg);

    return 0;
}

void dowork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}