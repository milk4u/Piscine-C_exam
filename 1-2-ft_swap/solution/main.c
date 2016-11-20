#include <stdio.h>

void    ft_swap(int *a, int *b);

int main(void)
{
    int a = 100;
    int b = -999666;

    ft_swap(&a, &b);
    printf ("a value after swaping :%d\n", a);
    return (0);
}
