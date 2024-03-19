#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int len = 0;
    for (char c : a) len ++;
    cout << len << '\n'; 
}