int max(int *tab, unsigned int len)
{
    int max;
    int i;

    i = 0;
    max = 0;
    if (tab)
    {
        max = tab[i];
        while (++i < len)
            if (tab[i] > max)
                max = tab[i];
    }
    return (max);
}
