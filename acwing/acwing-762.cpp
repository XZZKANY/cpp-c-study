#include <iostream>

using namespace std;

int main()
{
    double k;
    cin >> k;
    
    string a, b;
    cin >> a >> b;
    int pk = 0;
    for (int i = 0; a[i]; i ++)
        if (a[i] == b[i]) 
            pk ++ ;
    
    if (double(pk) / a.size() >= k) puts("yes");
    else puts("no"); 

}