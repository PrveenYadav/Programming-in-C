#include<stdio.h>

// Write a function which clculates sum , product and average of two variables.

void calculateValue(int a , int b , int *sum , int *prod , int *avg);

int main(){
    int a = 5;
    int b = 7;
    int sum , prod , avg;
    calculateValue(a , b , &sum , &prod , &avg);
    printf("sum = %d \nproduct = %d \naverage = %d \n", sum , prod, avg);

    return 0;
}

void calculateValue(int a , int b , int *sum , int *prod , int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}