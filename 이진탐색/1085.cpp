#include <stdio.h>

int main()
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int distx = (w - x) < x ? (w - x) : x;
    int disty = (h - y) < y ? (h - y) : y;
    int dist = distx < disty ? distx : disty;
    printf("%d\n", dist);
    return 0;
}