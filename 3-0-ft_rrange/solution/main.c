#include <stdio.h>

int     *ft_rrange(int a, int b);

int     main(void)
{
    int *p;
    int i;

    i = 0;
    p = ft_rrange(-2147483648, -2147483600);
    while (i < 1000)
        printf ("%d, ", p[i++]);
    return (0);
}
