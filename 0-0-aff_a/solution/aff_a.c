#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        while (*argv[1] != '\0')
            if (*argv[1]++ == 'a')
            {
                write (1, "a\n", 2);
                return (0);
            }
        write (1, "\n", 1);
    }
    else
        write (1, "a\n", 2);
    return (0);
}
