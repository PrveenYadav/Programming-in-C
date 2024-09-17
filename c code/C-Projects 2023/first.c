#include <stdio.h>
#include <math.h>

int main()
{
    printf("praveen kumar");

    return 0;
}

// Printing nationality

void namaste();
void bonjour();

int main()
{
    printf("enter i for indian & f for french : ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }

    return 0;
}

void namaste()
{
    printf("Namaste! \n");
}
void bonjour()
{
    printf("Bonjour!! \n");
}


// Print price with gst
void printprice(float value);

int main()
{
    float value = 100.0;
    printprice(value);
    printf("value is : %f \n", value);

    return 0;
}

void printprice(float value)
{
    value = value + (0.18 * value);
    printf("final price is : %f \n", value);
}


// #include <math.h>
int main()
{
    int n = 4;
    printf("%f", pow(n, 2));

    return 0;
}