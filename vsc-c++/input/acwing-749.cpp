#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double M[12][12];
    int L;
    char s ;
    cin>>L>>s;
    
    for (int i = 0; i <= 11; i ++ )
      for (int j = 0; j <= 11; j ++)
            cin>>M[i][j];
    double c = 0;
    for (int k = 0; k <= 11; k ++) c += M[L][k];
    if (s == 'S') printf("%.1lf\n",c);
    else printf("%.1lf\n",c / 12.0 );
}