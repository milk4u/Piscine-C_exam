#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end);
long    get_size(int start, int end);

void    print_arr(int *arr, long arr_size)
{
    long i;

    i = -1;
    while (++i < arr_size - 1)
        printf ("%d, ", arr[i]);
    printf ("%d.\n", arr[i]);
}

int     main(int argc, char **argv)
{
    int *arr;

    if (argc == 3)
    {
        arr = ft_range(atoi(argv[1]), atoi(argv[2]));
        print_arr(arr, get_size(atoi(argv[1]), atoi(argv[2])));
    }
    else
        printf ("usage: [start_value] [end_value]\n");
    return (0);
}
