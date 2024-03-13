#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = a ++ ;

    cout << a << ' ' << b << endl;

    int c = ++ a;

    cout << a << ' ' << c << endl;

    return 0;
}