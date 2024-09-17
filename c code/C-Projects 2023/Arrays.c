#include <stdio.h>

int main()
{
    int marks[3];
    printf("enter phy : ");
    scanf("%d", &marks[0]);

    printf("enter chem : ");
    scanf("%d", &marks[1]);

    printf("enter math : ");
    scanf("%d", &marks[2]);

    printf("phy = %d, chem = %d, math = %d", marks[0], marks[1], marks[2]);

    return 0;
}

// Que - Write a program to enter price of 3 items & print their final cost with gst.

int main()
{
    float price[3];
    printf("enter 3 prices : ");

    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("total price 1 : %f \n ", price[0] + (0.18 * price[0]));
    printf("total price 2 : %f \n ", price[1] + (0.18 * price[1]));
    printf("total price 3 : %f \n ", price[2] + (0.18 * price[2]));

    return 0;
}

// Actually array is pointer...
int main()
{
    int aadhar[5];

    // input
    int *ptr = &aadhar[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d index : ", i);
        scanf("%d", &aadhar[i]);
    }

    // output
    for (int i = 0; i < 5; i++)
    {
        printf("%d index = %d \n", i, aadhar[1]);
    }

    return 0;
}

// que - Write a function to reverse an array.

void reverse(int arr[], int n);
void printArr(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    printArr(arr, 5);
    return 0;
}

void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstVal = arr[i];
        int secondVal = arr[n - 1 - 1];

        arr[i] = secondVal;
        arr[n - 1 - 1] = firstVal;
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
