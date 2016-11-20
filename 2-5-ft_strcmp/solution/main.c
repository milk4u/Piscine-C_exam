#include <stdio.h>

int ft_strcmp(char *str1, char *str2);

int main(int argc, char **argv)
{
    if (argc == 3)
        printf ("%d", ft_strcmp(argv[1], argv[2]));
    printf ("\n");
    return (0);
}
