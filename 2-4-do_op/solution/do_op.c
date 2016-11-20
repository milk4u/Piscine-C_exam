#include <stdio.h>
#include <stdlib.h>

int do_op(int a, char c, int b)
{
    int ans;

    ans = 0;
    if (c == '+')
        ans = a + b;
    if (c == '-')
        ans = a - b;
    if (c == '*')
        ans = a * b;
    if (c == '/')
        if (b != 0)
            ans = a / b;
        else
        {
            printf ("Division by zero\n");
            exit (1);
        }
    if (c == '%')
        if (b != 0)
            ans = a % b;
        else
        {
            printf ("Some shit\n");
            exit (1);
        }
    return (ans);
}

int main(int argc, char **argv)
{
    int     first;
    int     last;
    char    operator;

    if (argc == 4)
    {
        first = atoi(argv[1]);
        last = atoi(argv[3]);
        operator = *argv[2];
        printf ("%d", do_op(first, operator, last));
    }
    printf ("\n");
    return (0);
}
