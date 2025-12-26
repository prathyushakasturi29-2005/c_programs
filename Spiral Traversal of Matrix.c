#include <stdio.h>
int main()
{
    int arr[4][4] = { { 1, 5, 9, 13 },
                      { 2, 6, 10, 14 },
                      { 3, 7, 11, 15 },
                      { 4, 8, 12, 16 } };
                      int m = 4, n = 4;
    int i, l = 0, right = m - 1, begin = 0, end = n - 1;
    while (l <= right && begin <= end)
    {
        for (i = l; i <= right; ++i)
        {
            printf("%d ", arr[begin][i]);
        }
        begin++;
        for (i = begin; i <= end; ++i) 
        {
            printf("%d ", arr[i][right]);
        }
        right--;
        if (begin <= end) 
        {
            for (i = right; i >= l; --i)
            {
                printf("%d ", arr[end][i]);
            }
            end--;
        }
        if (l <= right) {
            for (i = end; i >= begin; --i) 
            {
                printf("%d ", arr[i][l]);
            }
            l++;
        }
    }
    return 0;
}
