#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int m[20] = {0};
    for (int i = 0; i <= 19; i ++)
        cin>>m[i];

    for (int j = 19, n = 0; j >= 0; j --, n ++)
        printf("N[%d] = %d\n", n, m[j]);
    
    return 0;
}