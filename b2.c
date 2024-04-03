#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int row_sums[N];
    for (int i = 0; i < N; i++) {
        row_sums[i] = 0;
        for (int j = 0; j < M; j++) {
            row_sums[i] += matrix[i][j];
        }
    }

    int col_sums[M];
    for (int j = 0; j < M; j++) {
        col_sums[j] = 0;
        for (int i = 0; i < N; i++) {
            col_sums[j] += matrix[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", row_sums[i]);
    }
    printf("\n");

    for (int j = 0; j < M; j++) {
        printf("%d ", col_sums[j]);
    }
    printf("\n");

    return 0;
}
