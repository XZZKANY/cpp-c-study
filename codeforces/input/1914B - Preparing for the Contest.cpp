//B. Preparing for the Contest
#include <iostream>
#include <algorithm>

using namespace std ;
int main()
{
    int x ;
    cin >> x ;
    
    
    for (int i = 0; i < x; i ++)
    {
        int b[55] = {0};
        int reverse[55] = {0}; // 不能放在前面 这里的意思是让每一次循环 重建一次数组 放在前面不能重新初始化
        int n, k;
        cin >> n >> k ;

        for (int i = 0; i < n; i ++) b[i] = n - i ; //倒序输入 eg : 6 5 4 / 3 2 1 

        for (int i = 1; i <= k + 1; i ++) // 翻转原数组后面(k + 1)个数 
            reverse[i - 1] = b[n - i] ;
        for (int i = 1; i <= k + 1; i ++) 
            b[n - k - 2 + i] = reverse[i - 1];
    
        for (int i = 0; i < n; i ++) cout << b[i] << ' ' ;
        cout << '\n' ; 
    }
    

}
