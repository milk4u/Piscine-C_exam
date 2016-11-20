#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(const char *str)
{
    char *p;
    char *tmp;

    p = (char*)malloc(sizeof(char) * ft_strlen(str) + 1);
    tmp = p;
    while (*str)
        *tmp++ = *str++;
    *tmp = '\0';
    return (p);
}
