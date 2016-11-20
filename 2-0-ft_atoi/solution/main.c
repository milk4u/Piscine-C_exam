#include <stdio.h>

int ft_atoi(const char *str);

int main(int argc, char **argv)
{
    int ans;
    
    if (argc == 2)
    {
        ans = ft_atoi(argv[1]);
        printf ("%d", ans);
    }
    printf ("\n");
    return (0);
}
