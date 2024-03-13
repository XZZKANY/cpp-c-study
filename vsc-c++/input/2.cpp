#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double M[12][12];
    char x ;
    cin>> x;

    for (int i = 10; i < 12; i ++)
        for (int j = 0; j < 12; j ++)
            cin>>M[i][j];
    double y = 0;
    for (int k = 10, n = 1; k >= 0; k --, n ++){
        double sum1 = 0; 
        for (int g = 1; g <= n; g --)
        {
            sum1 += M[k][g];
            printf("%.1lf ",M[k][g]);
        }
        y += sum1;
        
        
    }

    if (x == 'S') printf("%.1lf",y);
    else printf("%.1lf",y / 66);

    return 0;
}