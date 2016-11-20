#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        while (*argv[1] && *argv[2])
        {
            if (*argv[1] == *argv[2])
                argv[1]++;
            argv[2]++;
        }
        if (*argv[1])
            write (1, "0", 1);
        else
            write (1, "1", 1);
    }
    write (1, "\n", 1);
    return (0);
}
