#include <unistd.h>

static  int     can_capitalize(char c)
{
    return (c == '\0' || c == '\t' || c == ' ');
}

static  void    to_upper(char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 'a' + 'A';
}

static  void    to_lower(char *c)
{
    if (*c >= 'A' && *c <= 'Z')
        *c = *c - 'A' + 'a';
}

static  void    print_str(char  *str)
{
    int i;

    i = -1;
    while (str[++i] != '\0')
        write(1, &str[i], 1);
    write(1, "\n", 1);
}

static  char    *rstr_capitalizer(char *str)
{
    int i;

    i = -1;
    while (str[++i] != '\0')
    {
        if (can_capitalize(str[i + 1]))
             to_upper(&str[i]);
        else
            to_lower(&str[i]);
    }
    return (str);
}

int             main(int argc, char **argv)
{
    int ac;

    ac = 0;
    while (++ac < argc)
        print_str(rstr_capitalizer(argv[ac]));
    return (0);
}
