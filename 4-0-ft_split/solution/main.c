#include <stdio.h>

char        **ft_split(char *str);

int         main(int argc, char **argv)
{
    char    **arr;

    if (argc == 2)
    {
        arr = ft_split(argv[1]);
        while (*arr)
            printf ("%s\n", *arr++);
    }
    else
        printf ("Usage: [string_of_words]\n");
    return (0);
}
