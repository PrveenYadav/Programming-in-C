#include<stdio.h>
// Swap two numbers a & b .

void swap(int *a , int *b);

int main(){
    int a = 3;
    int b = 5;

    swap(&a , &b);
    printf("a = %d and b = %d \n", a , b);

    return 0;
}

//call by reference
void swap(int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;
}