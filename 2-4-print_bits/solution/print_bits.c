#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int devider;

    devider = 128;
    while (octet >= 0)
    {
        if (octet / devider)
        {
            write (1, "1", 1);
            octet -= devider;
        }
        else
            write (1, "0", 1);
        devider /= 2;
    }
}
