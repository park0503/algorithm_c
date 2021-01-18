#include <stdio.h>
int main()
{
    int l;
    scanf("%d", &l);
    int a[l];
    int b[l];
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &a[i]);
    }
    b[0] = a[0];
    int bl = 1;
    for (int i = 1; i < l; i++)
    {
        int j;
        for (j = 0; j < bl; j++)
        {
            if (a[i] == b[j])
            {
                break;
            }
        }
        if (j == bl)
        {
            b[bl] = a[i];
            bl++;
        }
    }
    int max = 0;
    int k = 1;
    int check = 0;
    int end = 0;
    for (k; k <= l; k++)
    {
        //printf("k = %d\n", k);
        for (int c = 0; c < bl; c++)
        {
            //printf("b의 원소 : %d\n", b[c]);
            for (int i = 0; i < l - k + 1; i++)
            {
                //printf("%d번째 원소부터 시작해보자\n", i);
                check = 0;
                for (int j = i; j < k + i; j++)
                {
                    //printf("그 상대는 %d\n", a[j]);
                    if (a[j] == b[c])
                    {
                        check = 1;
                        break;
                    }
                }
                if (check == 0)
                {
                    //printf("이 원소는 틀렸다. 다음으로\n");
                    break;
                }
            }
            if (check == 1)
            {
                end = 1;
                if (b[c] >= max)
                {
                    max = b[c];
                }
            }
        }
        if (end == 1)
        {
            //printf("바로 이거야\n");
            break;
        }
    }
    printf("%d %d\n", max, k);
    return 0;
}
