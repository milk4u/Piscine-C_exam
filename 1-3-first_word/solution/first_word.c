#include <unistd.h>

int main(int argc, char **av)
{
    if (argc == 2)
        while (*av[1])
        {
            if ((*av[1] != ' ') && (*av[1] != '\t'))
                write (1, av[1], 1);
            av[1]++;
            if (*av[1] == '\n' || *av[1] == ' ' || *av[1] == '\t')
                break ;
        }
    write (1, "\n", 1);
    return (0);
}
