#include <unistd.h>

void    change_case(char *c)
{
    if ((*c >= 'a') && (*c <= 'z'))
        *c = *c - 'a' + 'A';
    else if ((*c >= 'A') && (*c <= 'Z'))
        *c = *c - 'A' + 'a';
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        while (*argv[1])
            {
                change_case(argv[1]);
                write (1, argv[1], 1);
                argv[1]++;
            }
    }
    write (1, "\n", 1);
    return (0);
}
