#include <unistd.h>

void    to_lower(char *c)
{
    if (*c >= 'A' && *c <= 'Z')
        *c = *c - 'A' + 'a';
}

void    to_upper(char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 'a' + 'A';
}

int     is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\0');
}

int     main(int argc, char **argv)
{
    int pos;

    pos = 0;
    if (argc == 2)
    {
        to_upper(&argv[1][pos]);
        while (argv[1][++pos])
        {
            if (is_space(argv[1][pos - 1]))
                to_upper(&argv[1][pos]);
            else
                to_lower(&argv[1][pos]); 
        }
        while (*argv[1])
            write (1, argv[1]++, 1); 
    }
    write (1, "\n", 1);
    return (0);
}
