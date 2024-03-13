#include <iostream>
#include <cstdio>
using namespace std;
const int b = 10010;
int main()
{
    int n ;
    cin >> n;
    int m[b] = {0};
    
    for(int i = 0; i < n; i ++)
        cin >> m[i];
    int  min_element = INT_MAX , min_index = 0;
    for (int j = 0, f = 0; j < n; j ++, f ++)
    {
        if (m[j] < min_element)
        {
            min_element = m[j];
            min_index = j;
        }
    } 
    printf("Minimum value: %d\nPosition: %d", min_element, min_index);

    return 0;

}