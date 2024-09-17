#include <stdio.h>

int main()
{
   // We us int(%d), float(%f) and char(%c)
   int age = 22;
   printf("enter age");
   scanf("%d", &age);
   printf("His age is : %d", age);
   return 0;

   // Addition of two inputs
   int a, b;
   printf("enter a");
   scanf("%d", &a);

   printf("enter b");
   scanf("%d", &b);

   int sum = a + b;
   printf("Sum of a+b is : %d", sum);
   return 0;

   // or direct sum
   int a, b;
   printf("enter a");
   scanf("%d", &a);

   printf("enter b");
   scanf("%d", &b);

   printf("Sum is : %d", a - b);
   return 0;

   // Write a program to calculate Area of a Square.
   int side;
   printf("enter side");
   scanf("%d", &side);

   printf("Now area of a square is : %d", side * side);
   return 0;
}