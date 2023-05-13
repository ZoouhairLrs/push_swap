/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:49:26 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/13 16:14:08 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    push_to_b(t_element **stack_a, t_element **stack_b, int i)
{
    t_element   *head;
    int         j;

    j = 16;
    while (*stack_a)
    {
        head = *stack_a;
        if (head->index <= i)
        {
            do__pb(stack_a, stack_b);
            i++;
            print_stacks(*stack_a, *stack_b);
        }
        else if (head->index < i + j)
        {
            do__pb(stack_a, stack_b);
            do__rb(stack_b);
            print_stacks(*stack_a, *stack_b);
            i++;
        }
        else
        {
            do__ra(stack_a);
            print_stacks(*stack_a, *stack_b);
        }
    }
}

void    push_b_to_a(t_element **stack_a, t_element **stack_b)
{
    int size_stack;
    int pos_node1;
    t_element   *big_node1;

    size_stack = lst_size(*stack_b);
    create_index(*stack_b);
    // int i = 0;
	// while (i < size_stack)
	// {
	// 	printf("this is stack_b->value => %d\n", (*stack_b)->value);
	// 	printf("this is stack_b->index => %d\n", (*stack_b)->index);
	// 	(*stack_b) = (*stack_b)->next;
	// }
    while (size_stack)
    {
        big_node1 = big_node_of_stack(stack_b);
        printf("this is big node : %d\n", big_node1->value);
        // printf("this is big node inde : %d\n", big_node1->index);
        pos_node1 = pos_node(stack_b, big_node1);
        printf("this is pos node : %d\n", pos_node1);
        if (pos_node1 >= (size_stack / 2))
        {   
            big_node1->pos = pos_node1 - size_stack;
            // printf("this is pos - size : %d\n", big_node1->pos);
        }
        else if (pos_node1 < (size_stack / 2))
        {
            big_node1->pos = pos_node1;
            // printf("this is pos : %d\n", big_node1->pos);
        }
    // printf("*******************");
    // int i = 0;
	// while (i < size_stack)
	// {
	// 	printf("this is stack_b->value => %d\n", (*stack_b)->value);
	// 	printf("this is stack_b->index => %d\n", (*stack_b)->index);
	// 	(*stack_b) = (*stack_b)->next;
	// }
        push_to_a(stack_a, stack_b, big_node1);
        size_stack--;
        print_stacks(*stack_a, *stack_b);
    }
}

void    sort_big_algo(t_element **stack_a, t_element **stack_b)
{
    int i;

    i = 0;
    push_to_b(stack_a, stack_b, i);
    push_b_to_a(stack_a, stack_b);
}
