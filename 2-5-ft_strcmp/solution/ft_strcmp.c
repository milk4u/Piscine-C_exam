int ft_strcmp(char *str1, char *str2)
{
    while (*str1 || *str2)
        if (*str1 == *str2)
        {
            str1++;
            str2++;
        }
        else
            return (*str1 - *str2);
    return (0);
}
