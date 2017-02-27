#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void    ft_list_foreach(t_list *head, void (*f)(void *));

void    to_upper(void *pointer)
{
    char *str;

    str = (char*)pointer;
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            *str += 'A' - 'a';
        str++;
    }
}

int main(void)
{
    t_list *head;
    t_list *second;
    t_list *third;

    head = (t_list*)malloc(sizeof(t_list));
    char data1[100] = "London is a capital of Great Britain and Nother Ireland";
    head->data = (void*)data1;
    
    second = (t_list*)malloc(sizeof(t_list));
    char data2[100] = "Look at my horse, my horse is amazing!";
    second->data = (void*)data2;

    head->next = second;

    third = (t_list*)malloc(sizeof(t_list));
    char data3[100] = "O-o-o-o, la-la-la-la-la, zelenoglazoe taksy...";
    third->data = (void*)data3;
    third->next = NULL;

    second->next = third;

    void (*f)(void*);
    f = &to_upper;

    ft_list_foreach(head, f);
    printf ("%s\n", (char*)head->next->next->data);

    return (0);
}

