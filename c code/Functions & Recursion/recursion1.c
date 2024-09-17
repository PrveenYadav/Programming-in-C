#include <stdio.h>

// Write the Sum of first n Natural numbers.  ---Recursion---

int sum(int n);

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    printf("sum is %d \n", sum(n));
    
    return 0;
}

int sum(int n)   
{
    if (n == 1)
    {
        return 1;
    }
    
    int sumN = sum(n-1);
    int totalSum = sumN + n;  // For Factorial => sumN * n;
    return totalSum;
}