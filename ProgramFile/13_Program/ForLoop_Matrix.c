#include <stdio.h>

int main() {
    int rows, cols;

    // Input the dimensions of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Initialize matrices A and B
    int A[rows][cols];
    int B[rows][cols];

    // Input elements for matrix A
    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements for matrix B
    printf("Enter elements for matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Addition of matrices A and B
    int sum[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Subtraction of matrices A and B
    int difference[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            difference[i][j] = A[i][j] - B[i][j];
        }
    }

    // Multiplication of matrices A and B
    int product[rows][cols];
    if (cols == rows) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                product[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    product[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    } else {
        printf("Matrix multiplication is not possible because the number of columns in A is not equal to the number of rows in B.\n");
    }

    // Display results
    printf("\nMatrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", A[i][j]);
            // \t -> Inserts a tab in the text at this point.
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix A + B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix A - B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", difference[i][j]);
        }
        printf("\n");
    }

    if (cols == rows) {
        printf("\nMatrix A * B:\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("The Multiplication of Given matrices is not possible");
    }

    return 0;
}
