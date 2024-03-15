#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    
    int count = 0 ;
    
    for (int i = 0; i < a.size(); i ++)
    {
         char b = a[i];
         if (b <= '9' && b >= '0') count += 1;
    }
    printf("%d", count);
}
