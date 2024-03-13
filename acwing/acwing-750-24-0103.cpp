#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char x;
    cin >> x ; 
    double M[12][12];

    for (int i = 0; i <= 11; i ++)
        for (int j = 0; j <= 11; j ++)
            cin >> M[i][j];
    double y = 0;
    for (int a = 7, n = 6, m = 5; a <= 11; a ++, n ++, m --)
    {
        double sum = 0;
        for (int b = m; b <= n; b ++)
        {
            sum += M[a][b];
            printf("%8.1lf ", M[a][b]);
        }
        y += sum;
        printf("\n");
    }
    if (x == 'S') printf("%.1lf", y);
    else printf("%.1lf", y / 30);

}

