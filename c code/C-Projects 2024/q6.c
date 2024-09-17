#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int row, col;
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    // Input the number of rows and columns of matrices
    printf("Enter the number of rows and columns of matrices: ");
    scanf("%d %d", &row, &col);

    // Input elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the matrices
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the result matrix
    printf("Sum of the matrices:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}