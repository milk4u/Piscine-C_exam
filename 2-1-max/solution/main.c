#include <stdio.h>

int max(int *arr, unsigned int len);

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, -2, -19, 42, 25, 26, -2, 43, -100, 100, 52, 1234, 928, -234};

    printf ("some shit %d\n", max(arr, 13));
    return (0);
}
