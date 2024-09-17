#include <stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    s1.roll = 2314;
    s1.cgpa = 8.7;
    strcpy(s1.name, "Vicky");

    printf("Roll Number is : %d \n",s1.roll);
    printf("cgpa is : %f \n",s1.cgpa);
    printf("Name is : %s \n",s1.name);
    
    return 0;
}
