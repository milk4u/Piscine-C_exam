#include <stdlib.h>

int         is_space(char str)
{
    return (str == ' ' || str == '\t' || str == '\n' || str == '\0');
}

char        *strnew(int size)
{
    int     i;
    char    *str;

    if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
        return (NULL);
    i = -1;
    while (++i <= size)
        str[i] = 0;
    return (str);
}

int         count_words(char *str)
{
    int     i;
    int     count;

    i = -1;
    count = 0;
    while (str[++i])
        if (!(is_space(str[i])) && (is_space(str[i + 1])))
            count++;
    return (count);
}

int         count_length(char *str)
{
    int     length;

    length = 0;
    while (!(is_space(str[length])))
        length++;
    return (length);
}

char        **ft_split(char *str)
{
    char    *tmp;
    char    **array;
    char    **result;

    if (!(result = (char**)malloc(sizeof(char*) * (count_words(str) + 1))))
        return (NULL);
    array = result;
    while (*str)
    {
        while (is_space(*str) && *str)
            str++;
        if (!(*str))
            break ;
        if (!(*array = strnew(count_length(str))))
            return (NULL);
        tmp = *array;
        while (!(is_space(*str)))
            *tmp++ = *str++;
        array++;
    }
    array = NULL;
    return (result);
}
