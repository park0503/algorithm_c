#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int *cards = malloc(sizeof(int) * 20000001); //배열로 선언해줄 경우 stack size의 한계로 인해 segemntation fault 발생
    for (int i = 0; i < 20000001; i++)
    {
        cards[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cards[a[i] + 10000000]++;
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d ", cards[b[i] + 10000000]);
    }
    return 0;
}