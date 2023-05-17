/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:14:41 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/17 23:42:25 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

void	push(t_element **stack_a, t_element **stack_b)
{
	t_element	*tmp;

	if (!*stack_a)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = tmp;
}

void	do__pa(t_element **stack_a, t_element **stack_b)
{
	push(stack_b, stack_a);
}

void	do__pb(t_element **stack_a, t_element **stack_b)
{
	push(stack_a, stack_b);
}
