#include <stdio.h>

void swapColumns(int matrix[][200], int N, int col1, int col2) {
    for (int i = 0; i < N; i++) {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
}

void printMatrix(int matrix[][200], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    int matrix[200][200];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int u, v;
    scanf("%d %d", &u, &v);

    swapColumns(matrix, N, u - 1, v - 1);
    printMatrix(matrix, N);

    return 0;
}
