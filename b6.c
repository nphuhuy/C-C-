#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%lld", &a[i][j]);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(i==j || i+j==n-1)
                printf("%lld ", a[n-1-j][n-1-i]);
            else
                printf("%lld ", a[i][j]);
    return 0;
}
