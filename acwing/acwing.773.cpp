#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str, substr, newstr1 = "", newstr2 = "";
    
    while (cin >> str >> substr, str){
    
    int maxindex= 0, maxcount = 0;
    
    for (int i = 0; str[i]; i ++)
        if ((int)str[i] > maxcount){ 
            maxindex = i;
            maxcount = (int)str[i];
        }
    
    for (int i = 0; i < maxindex; i ++) newstr1 += str[i]; 
    for (int j = maxindex + 1; j <= str.size(); j ++) newstr2 += str[j];

    cout << newstr1 + substr + newstr2 << '\n' ;

    return 0;
    }
        

}