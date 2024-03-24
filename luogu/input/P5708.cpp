#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double  a, b, c;
    cin >> a >> b >> c;

    double p = (a + b + c) / 2.0;
    printf("%.1lf", sqrt(p *  (p - a) * (p - c) * (p - b)));
    return 0;

}