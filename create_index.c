/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:05:53 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/09 04:37:29 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void   *sorting_stack_clone(t_element *stack_a, t_list *list)
{
    int i;
    int temp;
    t_element   *head;
    int j;

    list->tab = malloc(sizeof(int) * lst_size(stack_a));
    i = 0;
    if (!list->tab)
        return (NULL);
    head = stack_a;
    while (head)
    {
        list->tab[i] = head->value;
        head = head->next;
        i++;
    }
    i = 0;
    while (i < lst_size(stack_a) - 1)
    {
        j = 0;
        while (j < lst_size(stack_a)-i-1)
        {
            if (list->tab[j] > list->tab[j+1])
            {
                temp = list->tab[j];
                list->tab[j] = list->tab[j+1];
                list->tab[j+1] = temp;
            }
            j++;
        }
        i++;
    }
    return (list);
}

void    create_index(t_element *stack_a)
{
    t_element   *head;
    int         len_stack;
    int         i;
    t_list      *list;

    list = NULL;
    head = stack_a;
    len_stack = lst_size(stack_a);
    
    list = malloc(sizeof(t_list));
    sorting_stack_clone(head, list);;
    while (head)
    {
        i = 0;
        while (i < len_stack)
        {
            if (head->value == list->tab[i])
               head->index = i;
            i++;
        }
            head = head->next;
    }
}