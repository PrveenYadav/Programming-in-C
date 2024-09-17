#include <stdio.h>
#include <stdlib.h> // library for DMA(Dynamic Memory Allocation)

int main()
{
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));

    return 0;
}

// Qwe - Write a program to allocate to store 5 prices(float).

int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }

    return 0;
}