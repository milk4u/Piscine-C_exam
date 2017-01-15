#include <unistd.h>
# define INT32_SIZE 10

void        print_num(int num)
{
    int     i;
    char    digits[INT32_SIZE];

    i = -1;
    while (num)
    {
        digits[++i] = num % 10 + '0';
        num /= 10;
    }
    while (i >= 0)
        write (1, &digits[i--], 1);
}

int         simple_atoi(char *str)
{
    int     ans;

    ans = 0;
    while (*str)
        ans = ans * 10 + (*str++ - '0');
    return (ans);
}

void        print_tab_mult(int value)
{
    int     i;
    int     result;

    i = 0;
    result = 0;
    while (++i < 10)
    {
        result += value;
        print_num(i);
        write (1, " x ", 3);
        print_num(value);
        write (1, " = ", 3);
        print_num(result);
        write (1, "\n", 1);
    }
}

int         main(int argc, char **argv)
{
    int value;

    if (argc == 2)
    {
        value = simple_atoi(argv[1]);
        print_tab_mult(value);
    }
    else
        write (1, "\n", 1);
    return (0);
}
