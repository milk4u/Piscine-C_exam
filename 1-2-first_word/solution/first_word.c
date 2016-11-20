#include <unistd.h>

int main(int argc, char **av)
{
    if (argc == 2)
    {
        while (*av[1] == ' ' || *av[1] == '\t')
            av[1]++;
        while (*av[1] != ' ' && *av[1] != '\t' && *av[1] != '\0')
        {
            write (1, av[1], 1);
            av[1]++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
