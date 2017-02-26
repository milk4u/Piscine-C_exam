#include <stdlib.h>
#include <stdio.h>

int                 is_prime(unsigned int number)
{
    unsigned int    i;

    if (!(number % 2) && number != 2)
        return (0);
    i = 3;
    while (i * i <= number && i < 48341)
    {
        if (!(number % i))
            return (0);
        i += 2;
    }
    return (1);
}

void                get_next_prime(unsigned int *number)
{
    if (*number % 2)
        (*number)++;
    (*number)++;
    while (!(is_prime(*number)))
        *number += 2;
}

void                fprime(unsigned int number)
{
    unsigned int    divider;

    divider = 2;
    while (number > 1)
    {
        if (is_prime(divider) && !(number % divider))
        {
            printf("%u", divider);
            number /= divider;
            if (number > 1)
                printf("*");
        }
        else
            get_next_prime(&divider);
    }
}

int                 main(int argc, char **argv)
{
    unsigned int    value;

    if (argc == 2)
    {
        value = atoi(argv[1]);
        if (is_prime(value))
            printf ("%u", value);
        else
            fprime(value);
    }
    printf ("\n");
    return (0);
}
