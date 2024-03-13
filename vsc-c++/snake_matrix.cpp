#include <cstdio>
int const N = 110 ;
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int M[N][N];
    int x = 0, y = 0, d = 3;
    int dx[] = {1, 0, -1, 0}, dy[] = {0, -1, 0, 1};

    for (int i = 1; i <= m * n; i ++)
    {
        M[x][y] = i ;//储存 数组
        // 下一步的判断
        int a = x + dx[d], b = y + dy[d];
        if (a < 0 || a == m || b < 0 || b == n|| M[a][b])
        {
            d = (d + 1) % 4 ;
            a = x + dx[d], b = y + dy[d];
        }
        x = a, y = b ;
    } 

    for (int i = 0; i < m; i ++){
        for (int j = 0; j < n; j ++) 
            printf("%d ", M[i][j]);
        printf("\n");
    }
}
