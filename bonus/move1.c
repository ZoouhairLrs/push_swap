/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:11:41 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/17 16:16:54 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

void	swap(t_element **stack)
{
	int			t;
	t_element	*next_node;

	if (element_size(*stack) < 2)
		return ;
	next_node = (*stack)->next;
	t = (*stack)->value;
	(*stack)->value = next_node->value;
	next_node->value = t;
}

void	do__sa(t_element **stack_a)
{
	swap(stack_a);
	ft_putstr_fd("sa\n", 1);
}

void	do__sb(t_element **stack_b)
{
	swap(stack_b);
	ft_putstr_fd("sb\n", 1);
}

void	do__ss(t_element **stack_a, t_element **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putstr_fd("ss\n", 1);
}
