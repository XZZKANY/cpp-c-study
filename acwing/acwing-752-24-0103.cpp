#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char x;
    cin >> x;
    double M[12][12] = {0};

    for (int i = 0; i <= 11; i ++)
        for (int j = 0; j <= 11; j ++)
            cin >> M[i][j];
    double y = 0;
    for (int a = 1; a <= 5; a ++)
    {
        double sum = 0;
        for (int b =12 - a; b <= 11; b ++ )
            sum += M[a][b];
        y += sum;
    }
    for (int c = 6 ; c <= 10; c ++)
    {
        double sum2 = 0;
        for (int d = c + 1; d <= 11; d ++)
            sum2 += M[c][d];
        
        y += sum2;
    }

    if (x == 'S') printf("%.1lf", y);
    else printf("%.1lf", y / 30);

}