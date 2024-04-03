#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int matrix[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (matrix[i][j] == matrix[j][i]) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
