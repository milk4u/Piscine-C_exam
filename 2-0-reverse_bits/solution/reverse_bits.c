unsigned char reverse_bits(unsigned char octet)
{
    int divider;
    int bit[8];
    int i;

    i = -1;
    divider = 128;
    while (divider > 0)
    {
        bit[++i] = octet / divider;
        if (bit[i])
            octet -= divider;
        divider /= 2;
    }
    divider = 128;
    while (i >= 0)
    {
        octet += divider * bit[i--];
        divider /= 2;
    }
    return (octet);
}
