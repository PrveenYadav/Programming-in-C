#include<stdio.h>

// print the number from 0 to n , if the number is given by the a user 

int main () {

    int n;
    printf("Enter the number : ");
    scanf("%d" , &n);

    for(int i = 0; i <= n; i++) {
        printf("%d \n", i);
    }

    return 0;
}



// Print the sum of first n Natural Numbers.
// And alse print them in Reverse.

int main () {

    int n;
    printf("Enter the Natural Number : ");
    scanf("%d" , &n);

    int sum = 0;
    for(int i = 1, j=n; i <= n && j>=1; i++ , j--) {
        sum = sum + i;
        printf("%d \n", j);
    }

    printf("sum is %d \n", sum);

    return 0;
}