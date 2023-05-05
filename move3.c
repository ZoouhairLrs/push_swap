/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:17:04 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/05 13:18:52 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	do__ra(t_element **stack_a)
{
	rotete(stack_a);
}

void	do__rb(t_element **stack_b)
{
	rotete(stack_b);
}

void	do__rr(t_element **stack_a, t_element **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
