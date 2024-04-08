#include <stdio.h>

void sortRow(int row[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (row[i] > row[j]) {
                temp = row[i];
                row[i] = row[j];
                row[j] = temp;
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int matrix[N][N];
    int i, j;

    // Nhập ma trận
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sắp xếp từng hàng của ma trận
    for (i = 0; i < N; i++) {
        sortRow(matrix[i], N);
    }

    // In ra ma trận đã sắp xếp
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
