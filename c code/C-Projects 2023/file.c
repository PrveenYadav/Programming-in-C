#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r"); // r = read mode

    // we can also use fgetc(fptr) = to read charecter  &  fputc('A', fptr) = to write charecter

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);

    fclose(fptr);

    return 0;
}

// for reading all file we use EFO(end of file)

int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    return 0;
}

// Qwe - Make a program to input student information from a user & enter it to a file.

int main()
{
    FILE *fptr;
    fptr = fopen("Student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("enter name : ");
    scanf("%s", name);
    printf("enter age : ");
    scanf("%d", &age);
    printf("enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "student name : %s\n", name);
    fprintf(fptr, "student age : %d\n", age);
    fprintf(fptr, "student cgpa : %f", cgpa);

    fclose(fptr);
    return 0;
}

// Qwe- Write a program to write all the odd numbers from 1 to n(input from user) in a file.

int main()
{
    FILE *fptr;
    fptr = fopen("Odd.txt", "w");

    int n;
    printf("enter n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);
    return 0;
}