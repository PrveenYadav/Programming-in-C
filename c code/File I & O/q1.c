#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("student.txt", "w"); // w means write data

    char name[100];
    int roll;
    float cgpa;

    printf("Enter the name : ");
    scanf("%s", name);
    printf("Enter Roll no : ");
    scanf("%d", &roll);
    printf("Enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student name : %s \n", name);
    fprintf(fptr, "Student roll : %d \n", roll);
    fprintf(fptr, "Student cgpa : %f ", cgpa);

    fclose(fptr);

    return 0;
}