#include <stdio.h>
#include <algorithm>

int main()
{
    int n, c;
    scanf("%d %d", &n, &c);
    int *x = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    int *dis = (int *)malloc(sizeof(int) * n * n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; i < n; j++)
        {
            dis[(n - i) * i + j]
        }
    }
    free(x);
    free(dis);
    return 0;
}