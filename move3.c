/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:17:04 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/12 17:20:45 by zlaarous         ###   ########.fr       */
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
