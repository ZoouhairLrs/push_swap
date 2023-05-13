/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_big_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 04:28:26 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/13 16:14:18 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_element   *big_node_of_stack(t_element **stack_b)
{
    t_element   *head1;
    t_element   *head2;

    head1 = *stack_b;
    head2 = *stack_b;
    while (head1->next != NULL)
    {
        if (head1->value > head1->next->value)
        {
            // printf("this is head1 %d > head2 %d\n", head1->value, head2->value);
            head2 = head1;
            // printf("this is head1 %d > head2 %d\n", head1->value, head2->value);
        }
        head1 = head1->next;
    }
    return (head2);
}

int pos_node(t_element **stack_b, t_element *big_node)
{
    t_element   *head;
    int         pos;

    pos = 0;
    head = *stack_b;
    while (head->next)
    {
        if (big_node->value == head->value)
            break;
        pos++;
        head = head->next;
    }
    return (pos);
}

void    push_to_a(t_element **stack_a, t_element **stack_b, t_element *big_node)
{
    while (big_node->pos != 0)
    {
        if (big_node->pos > 0)
        {
            do__rrb(stack_b);
            big_node->pos--;
            print_stacks(*stack_a, *stack_b);
            // printf("%d\n", big_node->pos);
        }
        else if (big_node->pos < 0)
        {
            do__rb(stack_b);
            big_node->pos++;
            print_stacks(*stack_a, *stack_b);
            // printf("%d\n", big_node->pos);
        }
    }
        // printf("%d\n", big_node->pos);
    do__pa(stack_a, stack_b);
}
