/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:29:08 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/13 21:48:44 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

size_t	element_size(t_element *stack)
{
	size_t	size;

	size = 0;
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

void	sort(t_element **stack_a, t_element **stack_b)
{
	// if len argc == 2 do__sa
	if (lst_size(*stack_a) == 2)
		do__sa(stack_a);
	
	//if argc == 3
	if (lst_size(*stack_a) == 3)
		sort_three(stack_a);

	//if argc == 4
	if (lst_size(*stack_a) == 4)
		sort_forth(stack_a, stack_b);

	//if argc == 5
	if (lst_size(*stack_a) == 5)
		sort_five(stack_a, stack_b);

	//if argc > 5
	if (lst_size(*stack_a) > 5)
	{
		sort_big_algo(stack_a, stack_b);
	}
	
}