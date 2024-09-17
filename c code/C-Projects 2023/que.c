#include <stdio.h>
#include <math.h>

int main()
{
    // Que - Write a program to check if a number is divisible by 2 or not.
    // even -> 1
    // odd -> 0
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;

    // que - print1(true) or 0(false) for following statement:
    // a. if it's sunday & it's  snowing -> true
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d \n", isSunday && isSnowing);
    return 0;

    // Qwe-b. if it's monday or it's raining -> true
    // Qwe-c. if a number is greater than 9 & less than 100 -> true
    // (2 digit number)
}
