// write a table of the number input by the user. 

#include<stdio.h>

int main(){
    int n;

    printf("Enter the number : ", n);
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n" , i*n);
    }

    return 0;
}


// print the reverse of table n .

int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--)
    {
        printf("%d \n", n*i);
    }
    
    return 0;
}