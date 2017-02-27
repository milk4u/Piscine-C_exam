void                sort_int_tab(int *tab, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
    int             tmp;

    i = -1;
    while (++i < size - 1)
    {
        j = i;
        while (++j < size)
            if (tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
    }
}
