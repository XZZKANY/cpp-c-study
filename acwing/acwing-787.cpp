//归并排序
#include <iostream>
using namespace std;

int q[10000000], tmp[100000000];

void merge_sort(int q[], int l, int r)
{
    if (l >= r) return;
    int mid = l + r >> 1;
    merge_sort(q, l, mid);
    merge_sort(q, mid + 1, r);

    int k = 0, i = 1, j = mid + 1;
    while (/* condition */)
    {
        /* code */
    }
     (i <= mid && j <= r)
}