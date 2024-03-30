#include <iostream>
#include <algorithm>
using namespace std;
const int n = 10010;
int q[n];

void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;
    int i = l - 1, j = r + 1, x = q[l + r >> 1];

    while(i < j)
    {
        do i ++;  while(q[i] < x);
        do j --;  while(q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}


// int main()
// {
//     int a; 
//     cin >> a;

//     for (int i = 0; i < a; i ++) cin >> q[i];

//     quick_sort(q, 0, a - 1);

//     for (int j = 0; j < a; j ++) cout << q[j] << ' ';
//     return 0;
// }
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i ++ ) scanf("%d", &q[i]);

    quick_sort(q, 0, n - 1);

    for (int i = 0; i < n; i ++ ) printf("%d ", q[i]);

    return 0;
}