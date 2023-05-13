/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:21:19 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/13 16:14:05 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	reverse_rotate(t_element **stack)
{
	t_element	*last;
	t_element	*tmp;

	last = *stack;
	tmp = *stack;
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	last->next = *stack;
	*stack = last;
	tmp->next = NULL;
}

void	do__rra(t_element **stack_a)
{
	reverse_rotate(stack_a);
	ft_putstr_fd("rra\n", 1);
}

void	do__rrb(t_element **stack_b)
{
	reverse_rotate(stack_b);
	ft_putstr_fd("rrb\n", 1);
}

void	do__rrr(t_element **stack_a, t_element **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putstr_fd("rrr\n", 1);
}
