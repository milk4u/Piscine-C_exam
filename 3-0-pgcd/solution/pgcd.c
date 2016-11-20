#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    int a;
    int b;
    int tmp;

    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        while (b)
        {
            tmp = a % b;
            a = b;
            b = tmp;
        }
        printf ("%d", a);
    }
    printf ("\n");
    return (0);
}
