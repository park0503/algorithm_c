#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

void quickSort(int *data, int start, int end) //출처 : https://m.blog.naver.com/ndb796/221226813382
{
    if (start >= end)
    {
        return;
    }
    int key = start;
    int i = start + 1, j = end, temp;

    while (i <= j)
    {
        while (i <= end && data[i] <= data[key])
        {
            i++;
        }
        while (j > start && data[j] >= data[key])
        {
            j--;
        }
        if (i > j)
        {
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        }
        else
        {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
}

int quickSearch(int *data, int start, int end, int number)
{
    if (start >= end)
    {
        return 0;
    }
    int mid = (start + end) / 2;
    if (data[mid] > number)
    {
        quickSearch(data, start, mid, number);
    }
    else if (data[mid] < number)
    {
        quickSearch(data, mid + 1, end, number);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int a[n][n];
    int b[n * n];
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j <= (i+1)*(i+1); j++) {
            
        }
    }
    quickSort(b, 0, n * n - 1);
    /*
    for (int i = 0; i < n * n; i++)
    {
        printf("%d\n", b[i]);
    }
    */
    printf("%d\n", b[k]);
    return 0;
}