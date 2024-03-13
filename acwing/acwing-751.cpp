#include <iostream>
#include <cstdio>
using namespace std;

double M[12][12];

int main()
{
    char x ;
    cin>>x;

    for (int i = 0; i < 12; i ++)
        for (int j = 0; j < 12; j ++)
            cin>>M[i][j];
    
    double y = 0;
    for (int a = 1; a <= 5; a ++){
        double sum1 = 0;
        for (int b = 0; b < a; b ++)
            sum1 += M[a][b];        
        y += sum1;
        
    }
    
    for (int c = 6, m = 4; c <= 10; c ++, m --){
        double sum2 = 0;
        for (int d = m; d >= 0; d --)
            sum2 += M[c][d];
        y += sum2;
    }
    if (x == 'S') printf("%.1lf",y);
    else printf ("%1lf",y / 30);
}