#include <stdio.h>
#include <math.h>

int main()
{
    // instructions...
    int a = 22;
    int b = a;
    int c = b * 6;
    int d = 1, e;

    int oldAge = 22;
    int years = 7;
    int newAge = oldAge + years;

    int x,y,z;
    x = y = z = 4;

    // while it is wrong(first declare then use the variables)
    int x = y = z = 4;

    // type conversion:
    // Always int convert in float and float does'nt convert in int
    // but forcefully we can convert like this using  (int)1.999999
    // and output will come 1 because it don't take numbers after(from right side) decimel
 
    int a = (int)1.999999;
    printf("%d \n", a);

    // operator precedence
    int x = 4 + 9 * 10;
    printf("%d \n", x);

    // And
    int x = 4 * 3 / 6 * 2;
    printf("%d \n", x); 
    return 0;
}