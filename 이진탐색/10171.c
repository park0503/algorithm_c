#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n / 500);
    n = n % 500;
    printf("%d\n", n / 100);
    n = n % 100;
    printf("%d\n", n / 50);
    n = n % 50;
    printf("%d\n", n / 10);
    return 0;
}