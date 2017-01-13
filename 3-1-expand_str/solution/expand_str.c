#include <unistd.h>

int     main(int argc, char **argv)
{
    int sig;

    sig = -1;
    if (argc == 2)
    {
        while (*argv[1])
        {
            if (*argv[1] != ' ' && *argv[1] != '\t')
            {
                write (1, argv[1]++, 1);
                sig = 1;
            }
            else if (sig == 1)
            {
                while (*argv[1] == ' ' || *argv[1] == '\t')
                    argv[1]++;
                if (*argv[1])
                {
                    write (1, "   ", 3);
                    sig = 0;
                }
            }
            if (sig == -1)
                argv[1]++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
