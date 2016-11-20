#include <unistd.h>

int islow(char c)
{
    return ((c >= 'a') && (c <= 'z'));
}

int iscapital(char c)
{
    return ((c >= 'A') && (c <= 'Z'));
}

int loopc(char c)
{
    if (islow(c))
        return (c - 'a');
    if (iscapital(c))
        return (c - 'A');
    return (0); 
}

int main(int argc, char **argv)
{
    int loop;

    if (argc == 2)
        while (*argv[1])
        {
            loop = loopc(*argv[1]);
            while (loop-- >= 0)
                write (1, argv[1], 1);
            argv[1]++;
        }
    write (1, "\n", 1);
    return (0);
}
