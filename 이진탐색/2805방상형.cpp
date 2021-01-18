#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>

int main()
{
    int n;
    long long m;
    scanf("%d %lld", &n, &m);
    int *tree = (int *)malloc(sizeof(int) * (n + 1));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tree[i]);
        //printf("꼴꼴 %d\n", tree[i]);
    }
    //printf("scnaf 끝\n");
    tree[n] = 0;
    std::sort(tree, tree + (n + 1));
    long long total = 0;
    int result;
    for (int i = n; i > 0; i--)
    {
        //printf("지금 i : %d\n", i);
        //printf("total : %d\n", total);
        long long diff = tree[i] - tree[i - 1];
        //printf("diff : %d\n", diff);
        if (total + diff * (n - i + 1) > m)
        {
            diff = m - total;
            diff = (long long)(ceil((double)diff / (double)(n - i + 1)));
            result = tree[i] - diff;
            //printf("result : %d\n", result);
            break;
        }
        else if (total + diff * (n - i + 1) < m)
        {
            total += diff * (n - i + 1);
            continue;
        }
        else
        {
            result = tree[i] - diff;
            //printf("result : %d\n", result);
            break;
        }
    }
    printf("%d\n", result);
    return 0;
}