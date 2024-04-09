#include <stdio.h>

int main() {
    int N, M, P, i, j, k;
    scanf("%d %d %d", &N, &M, &P);
    
    // Khởi tạo ma trận A và B
    int A[N][M], B[M][P], C[N][P];
    
    // Đọc ma trận A từ input
    for(i = 0; i < N; i++)
        for(j = 0; j < M; j++)
            scanf("%d", &A[i][j]);
    
    // Đọc ma trận B từ input
    for(i = 0; i < M; i++)
        for(j = 0; j < P; j++)
            scanf("%d", &B[i][j]);
    
    // Khởi tạo ma trận C với giá trị 0
    for(i = 0; i < N; i++)
        for(j = 0; j < P; j++)
            C[i][j] = 0;
    
    // Tính ma trận tích C = A * B
    for(i = 0; i < N; i++) {
        for(j = 0; j < P; j++) {
            for(k = 0; k < M; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // In ma trận tích C
    for(i = 0; i < N; i++) {
        for(j = 0; j < P; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
