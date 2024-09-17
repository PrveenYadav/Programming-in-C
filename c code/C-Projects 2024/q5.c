#include<stdio.h>

// Keep taking numbers as input from user until user enters an odd number.

int main() {

    int n;

    do
    {
        printf("Enter the Number : ");
        scanf("%d", &n);
        printf("%d \n", n);

        if (n % 2 != 0)
        {
            break;
        }

    } while (1);
    
    printf("Thank you");
    return 0;
}



// Keep taking numbers as input from user until user enters a number which is multiple of 7 .



int main() {

    int n;

    do
    {
        printf("Enter the Number : ");
        scanf("%d", &n);
        printf("%d \n", n);

        if (n % 7 == 0)
        {
            break;
        }

    } while (1);
    
    printf("Thank you");
    return 0;
}