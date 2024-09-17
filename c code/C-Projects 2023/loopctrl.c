#include <stdio.h>

int main()
{
    // for loop
    // i = iterator and it's can be int, float and char also.
    // i+1 and i++ is same
    for (int i = 1; i <= 100; i = i + 1)
    {
        printf("Hello world \n");
    }

    return 0;

    // or for reducing numbers
    for (int i = 10; i >= 1; i = i - 1)
    {
        printf("%d \n", i);
    }

    return 0;

    // while loop
    int i = 1;
    while (i <= 5)
    {
        printf("Hello world \n");
        i++;
    }

    return 0;


    // Print the number from 0 to n, if n is given by user (n=9).
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }
    return 0;

    // do while loop
    int i = 5;
    do
    {
        printf("%d \n", i);
        i--;
    } while (i >= 1);

    return 0;

    // Print the sum of first n Natural numbers.
    //Also, print them in reverse.
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i; // sum += i
    }

    printf("sum is %d \n", sum);

    for (int i = n; i >= 1; i--)
    {
        printf("%d \n", i);
    }

    return 0;


    // or we can solve in one loop only
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
    // we can remove all i because 1+2+3 =6 and reverse 3+2+1=6
    for (int i = 1, j = n; i <= n && j >= 1; i++, i--)
    {
        sum = sum + i; // sum += i
        printf("%d \n", j);
    }

    printf("sum is %d \n", sum);

    return 0;


    // Print the table of a number input by the user.
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", n * i);
    }

    return 0;


    // break statement
    for (int i = 0; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        printf("%d \n", i);
    }

    printf("end");

    return 0;

    // Keep taking numbers as input from user until user enters an odd number.
    int n;
    do
    {
        printf("enter number");
        scanf("%d", &n);
        printf("%d \n", n);

        if (n % 2 != 0)
        {
            break;
        }

    } while (1); // 1 = true
    printf("thank you");

    return 0;


    //Keep taking numbers as input from user until user enters a number which is multiple of 7.
    int n;
    do
    {
        printf("enter number");
        scanf("%d", &n);
        printf("%d \n", n);

        if (n % 7 == 0) // multiple of 7
        {
            break;
        }

    } while (1); // 1 means true
    printf("thank you \n");

    return 0;
}
