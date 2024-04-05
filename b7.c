#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%lld", &a[i][j]);
    int u, v;
    scanf("%d%d", &u, &v);
    u--; v--;
    for(int j=0; j<n; j++) {
        long long temp = a[u][j];
        a[u][j] = a[v][j];
        a[v][j] = temp;
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            printf("%lld ", a[i][j]);
        printf("\n");
    }
    return 0;
}
