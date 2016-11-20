#include <unistd.h>

void    print_rev(char *str)
{
    char    tmp;

    if (*str)
    {
        tmp = *str;
        print_rev(++str);
        write (1, &tmp, 1);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        print_rev(argv[1]);
    write (1, "\n", 1);
    return (0);
}
