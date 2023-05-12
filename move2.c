/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:14:41 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/12 17:17:45 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_element **stack_a, t_element **stack_b)
{
	t_element	*tmp;
	// t_element	*element;

	if (!*stack_a)
		return ;
	tmp = (*stack_a)->next;
	// tmp = *stack_a;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = tmp;
}

void	do__pa(t_element **stack_a, t_element **stack_b)
{
	push(stack_b, stack_a);
	ft_putstr_fd("pa\n", 1);
}

void	do__pb(t_element **stack_a, t_element **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr_fd("pb\n", 1);
}