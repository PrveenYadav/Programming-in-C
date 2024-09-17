#include <stdio.h>

int main()
{
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // Asssigning elements to the matrix
  printf("\n Enter matrix elements : \n");

  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
    {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  // computing the transpose
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
    {
      transpose[j][i] = a[i][j];
    }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
    for (int j = 0; j < r; ++j)
    {
      printf("%d  ", transpose[i][j]);
      if (j == r - 1)
        printf("\n");
    }
  return 0;
}



// Fibonacci sequence

fibonacci(int n)
{
  int first = 0, second = 1, next;

  // printf("Fibonacci Sequence up to %d terms:\n", n);

  for (int i = 0; i < n; ++i)
  {
    printf("%d, ", first);
    next = first + second;
    first = second;
    second = next;
  }

  printf("\n");
}

int main()
{
  int n;

  // Input the number of terms
  printf("Enter the number of terms in the Fibonacci sequence: ");
  scanf("%d", &n);

  // Display the Fibonacci sequence
  fibonacci(n);

  return 0;
}


// Printing Vowel Constant
int main()
{
  char ch;
  printf("Enter the Alphabet : ");
  scanf("%c", &ch);

  // Checking if the character ch
  // is a vowel or not.
  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
  {

    printf(" vowel \n");
  }
  else
  {
    printf(" Consonant \n");
  }

  return 0;
}


// Swapping the Value
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int x, y;
  printf("enter values of x: ");
  scanf("%d", &x);
  printf("enter values of y : ");
  scanf("%d", &y);

  printf("Before swapping: x = %d, y = %d\n", x, y);
  swap(&x, &y);

  printf("After swapping: x = %d, y = %d\n", x, y);

  return 0;
}
