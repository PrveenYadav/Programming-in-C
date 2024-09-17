#include <stdio.h>

// Switch statement

int main()
{
    char day;
    printf("Enter the day : ");
    scanf("%s", &day);

    switch (day)
    {
    case 's':
        printf("Sunday \n");
        break;

    case 'm':
        printf("Monday \n");
        break;

    case 't':
        printf("Tuesday \n");
        break;

    case 'w':
        printf("Wednesday \n");
        break;

    case 'T':
        printf("Thursday \n");
        break;

    case 'f':
        printf("Friday \n");
        break;

    case 'S':
        printf("Saturday \n");
        break;

    default:
        printf("Not Valid");
        break;
    }

    return 0;
}