#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int minute = c * 60 + d - a * 60 - b;
    cout << minute / 60 << ' '<< minute % 60 << '\n';
    return 0; 
}