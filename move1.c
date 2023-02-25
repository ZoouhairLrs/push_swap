/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:29:08 by zlaarous          #+#    #+#             */
/*   Updated: 2023/02/25 20:47:08 by zlaarous         ###   ########.fr       */
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

void	rotate(t_element **stack)
{
	t_element	*tmp;
	int			first;

	tmp = *stack;
	first = tmp->value;
	if (!tmp || !tmp->next)
		return ;
	while (tmp->next != NULL)
	{
		tmp->value = tmp->next->value;
		tmp = tmp->next;
	}
	tmp->value = first;
}

void	sort(char *move, t_element **stack_a, t_element **stack_b)
{
	// (void)stack_a;
	// (void)stack_b;

	if(ft_strcmp(move, "pb"))
	{
		push(stack_a, stack_b);
	}
	else if(ft_strcmp(move, "pa"))
	{
		push(stack_b, stack_a);
	}
	else if(ft_strcmp(move, "ra"))
	{
		rotate(stack_a);
	}
	else if(ft_strcmp(move, "rb"))
	{
		rotate(stack_b);
	}
}
