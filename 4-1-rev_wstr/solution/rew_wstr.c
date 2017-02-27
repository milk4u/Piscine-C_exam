#include <unistd.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    print_word(char *str)
{
    while (*str != ' ' && *str)
        write (1, str++, 1);
    write (1, "\n", 1);
}

int     main(int argc, char **argv)
{
    int len;

    if (argc == 2)
    {
        len = ft_strlen(argv[1]);
        while (--len >= 0)
            if (argv[1][len] != ' ' && (argv[1][len - 1] == ' ' || len == 0))
                print_word(&argv[1][len]);
    }
    else
        write (1, "\n", 1);
    return (0);
}
