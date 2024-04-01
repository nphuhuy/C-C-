#include <stdio.h>
int main() {
    int i, j;
    int ma_tran[4][3];
    printf("Nhap mang:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("Nhap a[%d][%d] = ", i, j);
            scanf("%d", &ma_tran[i][j]);
        }
        printf("\n");
    }
    printf("Ket qua:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", ma_tran[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// Kết quả:
// Nhập mảng:
// Nhập a[0][0] = 1 Nhập a[0][1] = 2 Nhập a[0][2] = 3
// Nhập a[1][0] = 4 Nhập a[1][1] = 5 Nhập a[1][2] = 6
// Nhập a[2][0] = 7 Nhập a[2][1] = 8 Nhập a[2][2] = 9
// Nhập a[3][0] = 9 Nhập a[3][1] = 6 Nhập a[3][2] = 3
// Kết quả:
// 1 2 3
// 4 5 6
// 7 8 9
// 9 6 3
