#include <iostream>

using namespace std;

int main()
{
    double pi = 3.14;
    int h, r ;
    cin >> h >> r;
    int cnt = 0;
    double  v = h * pi * r * r ;
    if (20000 / v != 0) cnt = 20000 / v + 1;
    else cnt = 20000 / v;

    cout << cnt << '\n';
    return 0; 
}