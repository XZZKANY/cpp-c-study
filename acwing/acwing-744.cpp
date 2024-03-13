#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char c;
    cin>>c;

    double M[12][12];

    for (int i = 0; i < 12; i ++)
        for (int j = 0; j < 12; j ++)
            cin >> M[i][j];
    double sum = 0;
    for (int a = 0; a <= 11; a++){
        sum += M[a][n];
        //printf("%.1f ", M[n][a] );
    }
    if (c == 'S') printf("%.1lf", sum);
    else printf("%.1lf", sum / 12);
}