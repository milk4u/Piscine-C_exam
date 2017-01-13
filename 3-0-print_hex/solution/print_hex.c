#include <unistd.h>

static int  is_digit(char c)
{
    return ((c >= '0' && c <= '9'));
}

static int  simple_atoi(char *str)
{
    int     i;
    int    ans;

    i = 0;
    ans = 0;
    while (str[i] != '\0')
    {
        if (!is_digit(str[i]))
            return (-1);
        ans = ans * 10 + (str[i++] - '0');
    }
    return (ans);
}

int         main(int argc, char **argv)
{
    int     dec;
    int     tmp;
    char    hex_digit;

    if (argc == 2)
    {
        dec = simple_atoi(argv[1]);
        if (!dec)
            write(1, "0", 1);
        while (dec > 0)
        {
            tmp = dec % 16;
            hex_digit = tmp < 10 ? tmp + '0' : tmp - 10 + 'a';
            write (1, &hex_digit, 1);
            dec = dec / 16;
        }
    }
    write(1, "\n", 1);
    return (0);
}
