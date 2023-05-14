/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:17:04 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/14 23:11:56 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate(t_element **stack)
{
	t_element	*tmp;
	t_element	*tail;

	tmp = *stack;
	*stack = (*stack)->next;
	tail = get_stack_bottom(*stack);
	tmp->next = NULL;
	tail->next = tmp;
}

void	do__ra(t_element **stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", 1);
}

void	do__rb(t_element **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", 1);
}

void	do__rr(t_element **stack_a, t_element **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr_fd("rr\n", 1);
}
