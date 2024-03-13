#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char x;
    cin >> x;
    double M[12][12];

    for (int i = 0; i <= 11; i ++)
        for (int j = 0; j <= 11; j ++)
            cin >> M[i][j];

    double y = 0; 

    for (int a = 1, c = 0; a <= 11; a ++, c ++)
    {
        double sum = 0;
        for (int b = 0; b <= c; b++)
        {
            sum += M[a][b]; 
        }
        y += sum;       
    }
    if (x == 'S') printf("%.1lf", y);
    else printf("%.1lf", y / 66);
}