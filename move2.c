/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:14:41 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/05 13:16:34 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_element **stack_a, t_element **stack_b)
{
	t_element	*tmp;
	t_element	*element;

	if (!*stack_a)
		return ;
	element = (*stack_a)->next;
	tmp = *stack_a;
	tmp->next = *stack_b;
	*stack_b = tmp;
	*stack_a = element;
}

void	do__pa(t_element **stack_a, t_element **stack_b)
{
	push(stack_a, stack_b);
}

void	do__pb(t_element **stack_a, t_element **stack_b)
{
	push(stack_b, stack_a);
}