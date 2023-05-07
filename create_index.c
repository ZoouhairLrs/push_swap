/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:05:53 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/07 22:01:21 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int   *sorting_stack_clone(t_element *stack_a)
{
    int *tab;
    int i;
    // int temp;
    // bool swapped;

    tab = malloc(sizeof(int) * lst_size(stack_a));
    i = 0;
    if (!tab)
        return (NULL);
    printf("%d\n", lst_size(stack_a));
    while (i < lst_size(stack_a))
    {
        tab[i] = stack_a->value;
        // printf("tab[%d] = %d\n", i, tab[i]);
        stack_a = stack_a->next;
        i++;
    }
    // swapped = true;
    // i = 0;
    // while (swapped) {
    //     swapped = false;
    //     int j = 0;
    //     while (j < lst_size(stack_a)-1-i)
    //     {
    //         if (tab[j] > tab[j+1])
    //         {
    //             temp = tab[j];
    //             tab[j] = tab[j+1];
    //             tab[j+1] = temp;
    //             swapped = true;
    //         }
    //         j++;
    //     }
    //     i++;
    // }
    return (tab);
}

void    create_index(t_element *stack_a)
{
    t_element   *head;
    int         len_stack;
    int         i;
    // int         *t;

    head = stack_a;
    len_stack = lst_size(stack_a);
    // t = sorting_stack_clone(stack_a);
    while (head)
    {
        i = 0;
        while (i < len_stack)
        {
            // if (head->value == t[i])
            //    head->index = i;
            i++;
        }
            head = head->next;
    }
}