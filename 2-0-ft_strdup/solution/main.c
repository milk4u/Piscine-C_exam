#include <stdio.h>

char    *ft_strdup(const char *str);

int main(void)
{
    char arr[] = "Asdfg      hjkZ";
    char *p = ft_strdup(arr);
    printf ("%s\n", p);
    return (0);
}
