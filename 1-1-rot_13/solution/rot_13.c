#include <unistd.h>

void    ft_rot13(char *c)
{
    if ((*c >= 'a') && (*c <= 'z'))
        *c = ((*c - 'a' + 13) % 26) + 'a';
    else if ((*c >= 'A') && (*c <= 'Z'))
        *c = ((*c - 'A' + 13) % 26) + 'A';
}

int main(int argc, char **argv)
{
    if (argc == 2)
        while (*argv[1])
        {
            ft_rot13(argv[1]);
            write (1, argv[1], 1);
            argv[1]++;
        }
    write (1, "\n", 1);
    return (0);
}
