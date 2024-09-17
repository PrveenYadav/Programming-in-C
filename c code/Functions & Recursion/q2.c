#include <stdio.h>

// Write the function that prints Namaste if user is Indian & Bonjour for French.

void printNamaste();
void printBonjour();

int main()
{
    char ch;
    printf("Enter The Nationality :");
    scanf("%s", &ch);
    if (ch == 'i')
    {
        printNamaste();
    }
    else
    {
        printBonjour();
    }
    
    return 0;
}


void printNamaste()
{
    printf("Namaste \n");
}
void printBonjour()
{
    printf("Bonjour \n");
}
