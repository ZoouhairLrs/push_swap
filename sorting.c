/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:29:08 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/05 22:13:41 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	(void)stack_b;
	// if len argc == 2 do__sa
	if (lst_size(*stack_a) == 2)
	{
		do__sa(stack_a);
	}
	
	//if argc == 3 

	//if argc == 4

	//if argc == 5
}
