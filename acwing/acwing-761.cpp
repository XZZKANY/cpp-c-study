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
// c 语言
/*#include <stdio.h>
#include <string.h>

int main()
{
    char a[110];
    
    fgets(a, sizeof a ,stdin);
    int count = 0;
    for (int i = 0; i < strlen(a); i ++)
    {
        char b = a[i];
        if (b >= '0' && b <= '9') count += 1;
    }
    printf("%d", count);
}
*/