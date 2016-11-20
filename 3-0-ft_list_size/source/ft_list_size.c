#include "ft_list.h"

int     ft_list_size(t_list *begin_list)
{
    int     size;
    t_list  *tmp;

    tmp = begin_list;
    size = 0;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return (size);
}
