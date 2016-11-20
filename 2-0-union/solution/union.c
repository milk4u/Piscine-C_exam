#include <unistd.h>

void    ft_print(char *str, char *arr)
{
    while (*str)
    {
        if (arr[*str] == 0)
        {
            write (1, str, 1);
            arr[*str] = 1;
        }
        str++;
    }
}

int main(int argc, char **argv)
{
    int     i;
    char    arr[128];

    i = -1;
    while (++i < 128)
        arr[i] = 0;

    if (argc == 3)
    {
        ft_print(argv[1], arr);
        ft_print(argv[2], arr);
    }
    write (1, "\n", 1);
    return (0);
}
