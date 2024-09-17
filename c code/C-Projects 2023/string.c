#include <stdio.h>
#include <string.h> //library for using string functions...

// Qwe - Create a string firstname & second name to store details of user & print all the character using loop.

void printstring(char arr[]);

int main()
{
    // char name[] = {'V','I','C','K','Y','\0'};
    // char name[] = "Vicky";

    char firstname[] = "Vicky";
    char lastname[] = "Yadav";

    printstring(firstname);
    printstring(lastname);

    return 0;
}

void printstring(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main()
{
    char name[50];
    scanf("%s", name); // scanf can't print multiple words, it's print only one word.
    printf("Your name is %s", name);

    return 0;
}

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    puts(str);

    return 0;
}


// Que - Make a program that inputs user's name & prints its length.

int countlength(char arr[]);

int main()
{
    char name[100];
    fgets(name, 100, stdin);

    printf("Length is : %d", countlength(name));

    return 0;
}

int countlength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}

// Que - Find the salted form of a password entered by user if the salt is "123" & added the end.

void salting(char password[]);

int main()
{
    char password[100];
    scanf("%s", password);

    salting(password);
}

void salting(char password[])
{
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password); // newPass = "test"
    strcat(newPass, salt);     // newPass = "test" + "123"
    puts(newPass);
}

// Que - Write a function to count the occurrence of vowels in a string.

int countvowels(char str[]);

int main()
{
    char str[] = "Hello world";
    printf("Vowels are : %d", countvowels(str));

    return 0;
}

int countvowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}