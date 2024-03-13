#include <iostream>
#include <cstdio>
using namespace std;

const int m = 100;

int main()
{
    int n;
    cin>> n;
    while (n --)
    {
        int x;
        cin>> x;
        int f[m] = {0};

        f[0] = 0, f[1] = 1;
        for (int i = 2; i <= x; i ++)
            f[i] = f[i - 1] + f[i - 2];
        printf("Fib(%d) = %d\n", x, f[x]);
    }

    return 0;
}