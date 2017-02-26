#include <stdlib.h>

long            get_size(int a, int b)
{
    long ans;

    ans = b - a;
    if (a > b)
        ans = a - b;
    if (ans < 0)
        ans = -ans;
    return (ans + 1);
}

int             *ft_range(int start, int end)
{
    int     *arr;
    long    size;
    long    value;
    long    i;
    
    size = get_size(start, end);
    if (!(arr = (int*)malloc(sizeof(int*) * size)))
        return (NULL);
    i = -1;
    value = start;
    while (++i < size)
    {
        if (start < end)
            arr[i] = value++;
        else
            arr[i] = value--;
    }
    return (arr);
}
