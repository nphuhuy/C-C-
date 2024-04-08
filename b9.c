#include <stdio.h>


int is_prime(int n) {
    if (n <= 1)
        return 0; 
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return 0; 
    }
    return 1; 
}

int main() {
    int N;
    scanf("%d", &N);

    int matrix[N][N];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int prime_count = 0;
    for (int i = 0; i < N; ++i) {
        if (is_prime(matrix[i][i]))
            prime_count++;
        if (is_prime(matrix[i][N - 1 - i]) && i != N / 2)
            prime_count++;
    }

   
    printf("%d", prime_count);

    return 0;
}
