#include <iostream>
#include <cmath>
using namespace std ; 

bool isPerfectSquare(int num)
        {
            int sqrtnum = sqrt(num) ;

            return sqrtnum * sqrtnum == num ;
        }

int main()
{
    int t ;
    cin >> t ; 

    for (int i = 0; i < t; i ++)
    {
        int n ;
        cin >> n ;

        int sum  = 0 ;

        for (int i = 0; i < n; i ++)
        {
            int a ;
            cin >> a ;
            sum += a ;
        }

        if (isPerfectSquare(sum)) cout << "yes" << '\n' ;
        else cout << "no" << '\n' ;
    } 
}