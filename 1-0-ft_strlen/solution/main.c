#include <unistd.h>

int ft_strlen(char *str);

int main(void)
{
    if (ft_strlen("a") == 1)
        write (1, "Ok\n", 3);
    if (ft_strlen("") == 0)
        write (1, "Ok\n", 3);
    return (0);
}
