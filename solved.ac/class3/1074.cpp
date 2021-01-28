#include <stdio.h>
#include <cmath>

long long index = 0;
int n, r, c;
void z(int size, int start_row, int start_col, int fix)
{
    if (size == 2)
    {
        for (int i = start_row; i < start_row + 2; i++)
        {
            for (int j = start_col; j < start_col + 2; j++)
            {
                if (i == r && j == c)
                {
                    printf("%lld\n", index);
                }
                else
                {
                    index += 1;
                }
            }
        }
    }
    else
    {
        size /= 2;
        int max_row = start_row + size;
        int max_col = start_col + size;
        if (r < max_row and c < max_col)
            z(size, start_row, start_col, fix);
        else if (r < max_row and c >= max_col)
        {
            index += (long long)pow(size, 2);
            z(size, start_row, max_col, fix);
        }
        else if (r >= max_row and c < max_col)
        {
            index += 2 * (long long)pow(size, 2);
            z(size, max_row, start_col, fix);
        }
        else
        {
            index += 3 * (long long)pow(size, 2);
            z(size, max_row, max_col, fix);
        }
    }
}

int main()
{
    scanf("%d %d %d", &n, &r, &c);
    n = (int)pow(2, n);
    z(n, 0, 0, n);
    return 0;
}