int ft_atoi(const char *str)
{
    int sig;
    int ans;

    ans = 0;
    while (*str == ' ' || *str == '\n' || *str == '\t' ||
        *str == '\v' || *str == '\r' || *str == '\f')
        str++;
    if (*str == '-')
    {
        sig = -1;
        str++;
    }
    else
    {
        if (*str == '+')
            str++;
        sig = 1;
    }
    while (*str >= '0' && *str <= '9')
        ans = (ans * 10) + (int)*str++ - '0';
    return (ans * sig);
}
