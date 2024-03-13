#include <iostream>
#include <cstdio>
using namespace std;

double M[12][12];

int main()
{
   char x;
   cin>>x;

   for (int i = 0; i < 12; i ++)
        for (int j = 0; j < 12; j ++)
            cin>>M[i][j];
    int n = 10, m = 1;
    double y = 0;
   for (int b = 0; b <= 4;b ++,m ++, n --){
        double sum = 0;
        for (int a = m; a <= n; a ++)
            sum += M[b][a];
        y += sum;
   }
    if (x == 'S') printf("%.1lf",y);
    else printf("%.1lf",y / 30);

}