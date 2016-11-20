#include <stdio.h>

void    ft_swap(int *a, int *b);

int main(void)
{
    int a = -100;
    int b = 999;

    printf ("Before swap:\na = %d\nb = %d\n", a, b);
    ft_swap(&a, &b);
    printf ("\nAfter swap:\na = %d\nb = %d\n", a, b);
    return (0);
}
