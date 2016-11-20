#include <unistd.h>

char    *print_w(char *str)
{
    while (*str != ' ' && *str != '\t' && *str != '\0')
        write (1, str++, 1);
    while (*str == ' ' || *str == '\t')
        str++;
    return (str);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
        while (*argv[1])
        {
            if (*argv[1] != ' ' && *argv[1] != '\t')
            {
                argv[1] = print_w(argv[1]);
                if (*argv[1])
                    write (1, " ", 1); 
            }
            else
                argv[1]++;
        }
    write (1, "\n", 1);
    return (0);
}
