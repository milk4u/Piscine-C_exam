static char        to_lower(char c)
{
    if (c >= 'A' && c <= 'F')
        return (c - 'A' + 'a');
    return (c);
}

static int         ft_strlen(const char *str)
{
    long    ans;

    ans = 0;
    while (str[ans])
        ans++;
    return (ans);
}

int                 ft_atoi_base(const char *str, int str_base)
{
    int     ans;
    char    sign;
    
    ans = 0;
    sign = *str == '-' ? -1 : 1;
    if (sign == -1)
        str++;
    if (str_base == 1)
        return (sign * ft_strlen(str));
    while (to_lower(*str))
    {
        ans *= str_base;
        ans += *str < '9' ? *str - '0' : *str - 'a' + 10;
        str++;
    }
    return (ans * sign);
}
