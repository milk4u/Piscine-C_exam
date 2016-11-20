#include <unistd.h>

void    set_null(char *str, int size)
{
    int     i;

    i = -1;
    while (++i < size)
        str[i] = 0;
}

int     was(int c, char *arr)
{
    if (arr[c] == 0)
        arr[c] = 1;
    if (arr[c] <= 0)
        return (0);
    return (1);
}

int     main(int argc, char **argv)
{
    char    arr[128];
    
    set_null (arr, 128);
    if (argc == 3)
        {
            while (*argv[2])
            {
                was (*argv[2], arr);
                argv[2]++;
            }
            while (*argv[1])
            {
                if (was (*argv[1], arr))
                {
                    write (1, argv[1], 1);
                    arr[*argv[1]] = -1; //hot fix repeating
                }
                argv[1]++;
            }
        }
    write (1, "\n", 1);
    return (0);
}
