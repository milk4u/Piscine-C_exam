#include <unistd.h>

int ft_sl(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    if (argc == 4)
        if (ft_sl(argv[2]) == ft_sl(argv[3]) && ft_sl(argv[2]) == 1)
            while (*argv[1])
            {
                if (*argv[1] == *argv[2])
                    *argv[1] = *argv[3];
                write (1, argv[1], 1);
                argv[1]++;
            }
    write (1, "\n", 1);
    return (0);
}
