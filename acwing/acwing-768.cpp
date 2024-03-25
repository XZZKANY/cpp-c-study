#include <iostream>

using namespace std;

int main()
{
    string a, b;
    getline(cin ,a);
    getline(cin , b);
    for (int i = 0; a[i]; i ++) 
    if (int (a[i]) < 97)  a[i] += 32; 
    
    for (int j = 0; b[j]; j ++) 
    if (int (b[j]) < 97) b[j] += 32;
    
    
    if (a == b) printf("%c", '=');
    else if (a > b) printf("%c", '>');
    else printf("%c", '<');
}