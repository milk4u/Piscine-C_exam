#include "ft_list.h"
#include <stdio.h>

int main(void)
{
    t_list *head;
    int     value;

    value = 10;
    head = ft_create_elem(&value);
    head->next = ft_create_elem(&value);
    head->next->next = ft_create_elem(&value);
    head->next->next->next = ft_create_elem(&value);
    head->next->next->next->next = ft_create_elem(&value);
    printf ("There are %d element(s) in list\n", ft_list_size(head));
    return (0);
}
