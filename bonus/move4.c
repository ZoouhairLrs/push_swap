/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:21:19 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/19 04:18:57 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

void	reverse_rotate(t_element **stack)
{
	t_element	*tmp;
	t_element	*tail;
	t_element	*before_tail;

	if (!(*stack)->next || !(*stack))
		return ;
	tail = get_stack_bottom(*stack);
	before_tail = get_stack_before_bottom(*stack);
	tmp = *stack;
	if (!tmp)
		return ;
	*stack = tail;
	(*stack)->next = tmp;
	before_tail->next = NULL;
}

void	do__rra(t_element **stack_a)
{
	reverse_rotate(stack_a);
}

void	do__rrb(t_element **stack_b)
{
	reverse_rotate(stack_b);
}

void	do__rrr(t_element **stack_a, t_element **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
