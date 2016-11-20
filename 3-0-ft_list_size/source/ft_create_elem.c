#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list  *tmp;

    tmp = (t_list*)malloc(sizeof(t_list));
    if (tmp)
    {
        tmp->data = data;
        tmp->next = NULL;
    }
    return (tmp);
}
