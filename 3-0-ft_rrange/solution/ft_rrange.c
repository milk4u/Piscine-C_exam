#include <stdlib.h>
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) > (y) ? (y) : (x))

unsigned int     size(int start, int end)
{
    unsigned int size;

    size = MAX(start, end) - MIN(start, end) + 1;
    return (size);
}

int     *ft_rrange(int start, int end)
{
    int *p;
    int i;

   if (!(p = (int*)malloc(sizeof(int) * size(start, end))))
       return NULL;
    i = -1;
    while (MIN(start, end) + ++i < MAX(start, end))
        p[i] = MIN(start, end) + i;
    p[i] = MAX(start, end);
    return (p);
}
