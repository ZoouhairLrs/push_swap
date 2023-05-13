/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:49:26 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/13 22:04:49 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    push_to_b(t_element **stack_a, t_element **stack_b, int i)
{
    t_element   *head;

    while (*stack_a)
    {
        head = *stack_a;
        if (head->index <= i)
        {
            do__pb(stack_a, stack_b);
            i++;
        }
        else if (head->index < i + 16)
        {
            do__pb(stack_a, stack_b);
            do__rb(stack_b);
            i++;
        }
        else
            do__ra(stack_a);
    }
}

void    push_b_to_a(t_element **stack_a, t_element **stack_b)
{
    int size_stack;
    int pos_node1;
    t_element   *big_node1;

    size_stack = lst_size(*stack_b);
    create_index(*stack_b);
    while (size_stack)
    {
        big_node1 = big_node_of_stack(stack_b);
        pos_node1 = pos_node(stack_b, big_node1);
        if (pos_node1 >= (size_stack / 2))
        {   
            big_node1->pos = pos_node1 - size_stack;
        }
        else if (pos_node1 < (size_stack / 2))
        {
            big_node1->pos = pos_node1;
        }
        push_to_a(stack_a, stack_b, big_node1);
        size_stack--;
    }
}

void    sort_big_algo(t_element **stack_a, t_element **stack_b)
{
    int i;

    i = 0;
    push_to_b(stack_a, stack_b, i);
    push_b_to_a(stack_a, stack_b);
}
