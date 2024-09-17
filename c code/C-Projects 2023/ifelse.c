#include <stdio.h>

int main()
{
    int age;
    printf("enter age :");
    scanf("%d", &age);

    // if-else condition
    if (age > 18)
    {
        printf("adult \n");
        printf("They can vote \n");
        printf("They can drive \n");
    }
    else
    {
        printf("not adult");
    }
    return 0;

    // else-if condition
    if (age >= 18)
    {
        printf("adult \n");
    }
    else if (age > 13 && age < 18)
    {
        printf("teenager \n");
    }
    else
    {
        printf("child");
    }
    return 0;


    // Ternary operator(for single statement you can use)
    age >= 18 ? printf("adult \n") : printf("not adult \n");


    // switch statement
    int day; // 1-mon; 2-tue; 3-wed;
    printf("enter day(1-7) : ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("tuesday \n");
        break;
    case 3:
        printf("wednesday \n");
        break;
    case 4:
        printf("thursday \n");
        break;
    case 5:
        printf("friday \n");
        break;
    case 6:
        printf("saturday \n");
        break;
    case 7:
        printf("sunday \n");
        break;

    default:
        printf("not a valid day! \n");
    }
    return 0;

    // Qwe - Write a program to check if a  student passed or failed.
    // marks > 30 is pass
    // marks <= 30 is fail

    // Qwe - Write a program to give grades to a student.
    // marks < 30 is C
    // 30 <= marks < 70 is B
    // 70 <= marks < 90 is A
    // 90 <= marks <= 100 is A+
}