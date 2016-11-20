int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int len;
    int temp;
    int i;
    
    i = -1;
    len = ft_strlen(str);
    while (++i < len / 2)
    {
        temp = str[len - i - 1];
        str[len - i - 1] = str[i];
        str[i] = temp;
    }
    return (str);
}
