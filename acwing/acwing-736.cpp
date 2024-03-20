#include <iostream>
#include <string.h>
using namespace std;

string player(int a, int b, int c)
{
    if (a == 10) 
    {
        if (b == 6) return "Player1";
        else return "Player2";
    }
    if (a == 11)
    {
        if (b == 6) return "Player2";
        else return "Player1";
    }
    if (a == 8)
    {
        if (b == 3) return "Player1";
        else return "Player2";
    }

    return "unknown";
}
int main()

{
    int count = 0;
    scanf("%d", count);
    
    
    while(count --)
    {
        string a;
        getline(cin, a);
        int index = 0;
        for (int i = 0; i < a.size(); i ++)
        {
            if ( a[i] == ' ' ) index = i ;
            
        }
        int left = index , right = a.size() - index ;
        
        if (left == right) printf("Tie\n");
        else printf("%s\n", player(a.size(), left, right));
    }
}