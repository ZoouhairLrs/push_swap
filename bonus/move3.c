/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:17:04 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/17 23:49:14 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

void	rotate(t_element **stack)
{
	t_element	*tmp;
	t_element	*tail;

	tmp = *stack;
	if (!tmp)
		return ;
	*stack = (*stack)->next;
	tail = get_stack_bottom(*stack);
	tmp->next = NULL;
	(tail) && (tail->next = tmp);
}

void	do__ra(t_element **stack_a)
{
	rotate(stack_a);
}

void	do__rb(t_element **stack_b)
{
	rotate(stack_b);
}

void	do__rr(t_element **stack_a, t_element **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
