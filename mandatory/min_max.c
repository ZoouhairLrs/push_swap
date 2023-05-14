/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:04:56 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/14 21:20:33 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_element	*find_min(t_element *stack_a)
{
	t_element	*stack;
	t_element	*min;

	min = stack_a;
	stack = stack_a;
	while (stack != NULL)
	{
		if (min->index > stack->index)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_element	*find_max(t_element *stack_a)
{
	t_element	*stack;
	t_element	*max;

	max = stack_a;
	stack = stack_a;
	while (stack)
	{
		if (stack->index < max->index)
			max = stack;
		stack = stack->next;
	}
	return (max);
}
