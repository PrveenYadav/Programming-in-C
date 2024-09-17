#include <stdio.h>

// Print all the odd numbers from 5 to 50 . OR take numbers from the user.

int main()
{
    int a , b;
    printf("enter the first count number : ");
    scanf("%d", &a);
    printf("enter the last count number : ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++)
    {
        if (i%2 != 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}


// Print the factorial of a number n .

int main(){
    int n;
    int f = 1;
    printf("Enter the factorial number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        f = f*i;
    }
    printf("factorial is : %d \n", f);

    return 0;
}