#include <iostream>
#include <cmath>
using namespace std;

int m[1000];
void shuju()
{
    for (int i = 1,j = 0;i < 1000; i += 2 )
        if (i % 10 != 5)
        { 
            m[j] = i;
            j ++ ;
        }
}

// int main()
// {
//     shuju();
//     
//     for (int i = 0; m[i]; i ++){
//         
//         cout << m[i] << '\n';
//     } 
// }

int find_smallest_num(int x)
{
    
    int remainder = 1;
    int a = 1;
    int endll = 0;
    int w = 0;
    while( remainder != 0)
    {
        endll = remainder * 10 + 1 ;
        
        remainder = endll % x ;
        w = endll / x;
    }
    return w;         //////   (int)log10(abs(remainder))
}
int main()
{
    shuju();

     
    for (int i = 0; m[i]; i ++ )
    {
        int a = find_smallest_num(m[i]);
        int b = (int) log10(abs(a * i)) + 1;

        cout << a << ' ' << b  ;
        cout << endl;
    }
}
