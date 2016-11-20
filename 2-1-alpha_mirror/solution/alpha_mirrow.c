#include <unistd.h>

char    *mirrow(char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = 'a' - *c + 'z';
    if (*c >= 'A' && *c <= 'Z')
        *c = 'A' - *c + 'Z';
    return (c);
}

void    alpha_mirrow(char *str)
{
    while(*str)
    {
        mirrow(str);
        write (1, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        alpha_mirrow(argv[1]);
    write (1, "\n", 1);
    return (0);
}
