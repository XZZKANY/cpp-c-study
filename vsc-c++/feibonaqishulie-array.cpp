#include <iostream>

using namespace std;

const int N = 10010;

int main()
{
    int m[N] = {0};
    m[0] = 1;
    m[1] = 1;

    int n;
    cin>> n;

    for (int i = 2; i <= n ; i ++)
        m[i] = m[i - 1] + m[i - 2];
    cout<< m[n - 1] << '\n';
}