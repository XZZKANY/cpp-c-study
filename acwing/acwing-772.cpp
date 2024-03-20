#include <iostream>
#include <string>

using namespace std;
char cnt[26];
int main()
{
    string str;
    cin >> str;
    

    for (auto i : str ) cnt[i - 'a'] ++;
    for (int j = 0; str[j]; j ++){
        if (cnt[str[j] - 'a'] == 1){
        cout << str[j] << endl;
        
        return 0;
        }

    }

    puts("no");
    return 0;

}
/*你在做什么
周志伟*/

