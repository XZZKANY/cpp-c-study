#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int cnt = a * 0.20 + b * 0.30 + c * 0.50;
    cout << cnt << endl; 
    return 0;
}