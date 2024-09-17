#include <stdio.h>

// Write a function to calculate percentage of a student from marks in science english and math.

int studentMarks(int s , int m , int e);

int main()
{
    int s,m,e;
    printf("Enter the marks : ");
    scanf("%d %d %d", &s, &m, &e);

    printf("Percentage is : %d", studentMarks(s , m , e));

    return 0;
}

int studentMarks(int s , int m , int e)
{
    int marks = ((s + m + e) / 3);
    return marks;
}