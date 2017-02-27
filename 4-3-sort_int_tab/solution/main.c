#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void                sort_int_tab(int *tab, unsigned int size);

void                print_int_tab(int *tab, unsigned int size)
{
    unsigned int    i;

    i = -1;
    while (++i < size - 1)
        printf ("%d, ", tab[i]);
    printf ("%d\n", tab[i]);
}

int                 main(int argc, char **argv)
{
    unsigned int    size;
    int             *array;
    unsigned int    i;

    if (argc == 2)
    {
        srand(time(NULL));
        size = atoi(argv[1]);
        array = (int*)malloc(sizeof(int) * size);
        i = -1;
        while (++i < size)
            array[i] = (rand() % size) - (size / 3);
        printf ("Before sorting:\n");
        print_int_tab(array, size);
        sort_int_tab(array, size);
        printf ("After sorting:\n");
        print_int_tab(array, size);
    }
    else
        printf ("Usage: [size_of_tab]\n");
    return (0);
}
