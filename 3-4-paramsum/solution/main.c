#include <unistd.h>

void    print_number(long number)
{
    char digit;

    if (number > 9)
    {
        print_number(number / 10);
        digit = number % 10 + '0';
        write (1, &digit, 1);
    }
    else
    {
        digit = number % 10 + '0';
        write (1, &digit, 1);
    }
}

int     main(int argc, char **argv)
{
    if (**argv == '0')
        argc += 0;
    print_number(argc - 1);
    write (1, "\n", 1);
    return (0);
}
