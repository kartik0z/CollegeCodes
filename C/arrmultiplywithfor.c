#include <stdio.h>

int main() {
    int matrix1[2][2], matrix2[2][2], product[2][2];

    // Taking input for the first matrix
    printf("Enter elements for the first 2x2 matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Taking input for the second matrix
    printf("Enter elements for the second 2x2 matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize the product matrix to 0
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            product[i][j] = 0;
        }
    }

    // Multiplying the two matrices
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Displaying the product matrix
    printf("Product of the matrices:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}