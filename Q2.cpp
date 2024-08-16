#include <stdio.h>

#define MAX 100

void readMatrix(int matrix[MAX][MAX], int rows, int cols);
void printMatrix(int matrix[MAX][MAX], int rows, int cols);
void transposeMatrix(int matrix[MAX][MAX], int transposed[MAX][MAX], int rows, int cols);

int main() {
    int matrix[MAX][MAX], transposed[MAX][MAX];
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    readMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transposed, rows, cols);

    printf("The transposed matrix is:\n");
    printMatrix(transposed, cols, rows);

    return 0;
}

void readMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[MAX][MAX], int transposed[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
}
