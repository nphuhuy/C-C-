#include <stdio.h>

// Function to print the matrix in given pattern
void print_pattern(int **matrix, int N) {
    // Pattern 1
    printf("Pattern 1:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Pattern 2
    printf("Pattern 2:\n");
    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Pattern 3
    printf("Pattern 3:\n");
    for (int i = 0; i < N; i++) {
        for (int j = N - 1; j >= 0; j--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Pattern 4
    printf("Pattern 4:\n");
    for (int i = N - 1; i >= 0; i--) {
        for (int j = N - 1; j >= 0; j--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    // Dynamically allocate memory for matrix
    int **matrix = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        matrix[i] = (int *)malloc(N * sizeof(int));
    }

    // Input matrix elements
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Call the function to print patterns
    print_pattern(matrix, N);

    // Free dynamically allocated memory
    for (int i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
