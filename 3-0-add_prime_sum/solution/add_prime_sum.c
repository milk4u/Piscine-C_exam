#include <unistd.h>

unsigned int    abs(int value)
{
    unsigned int ans;

    if (value < 0)
        ans = -value;
    else
        ans = value;
    return (ans);
}

void            print_number(int num)
{
    unsigned int    ans;
    char            digit;

    ans = abs(num);
    if (num < 0)
        write (1, "-", 1);
    if (ans > 9)
        print_number(ans / 10);
    digit = ans % 10 + '0';
    write (1, &digit, 1);
}

int             isprime(int num)
{
    int i;

    i = 1;
    while ((++i <= 46340) && (i * i <= num))
        if (num % i == 0)
            return (0);
    return (num);
}

unsigned int    prime_sum(int border)
{
    int i;
    unsigned int ans;

    i = 1;
    ans = 0;
    while (++i <= border)
        if (isprime(i))
            ans += i;
    return (ans);
}

int             ft_atoi(char *str)
{
    int sign;
    int ans;
    
    ans = 0;
    sign = 1;
    while (*str == ' ' || *str == '\v' || *str == '\t' ||
        *str == '\n' || *str == '\r' || *str == '\f')
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        ans = (ans * 10) + *str - '0';
        str++;
    }
    return (ans * sign);
}

int     main(int argc, char **argv)
{
    int val;

    if (argc == 2)
    {
        val = ft_atoi(argv[1]);
        if (val >= 0)
            print_number (prime_sum (val));
    }
    write (1, "\n", 1);
    return (0);
}
