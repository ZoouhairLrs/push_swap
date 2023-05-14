/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forth_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:13:33 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/14 21:21:38 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_in_stack(t_element *stack_a, int number)
{
	int		i;
	t_element	*head;

	i = 0;
	head = stack_a;
	while (head->index != number)
	{
		i++;
		head = head->next;
	}
	return (i);
}

void    sort_forth(t_element **stack_a, t_element **stack_b)
{
	t_element	*min;

	min = find_min(*stack_a);
	while (lst_size(*stack_a) > 3)
	{
		if (find_in_stack(*stack_a, min->index) == 0)
			do__pb(stack_a, stack_b);
		else if (find_in_stack(*stack_a, min->index) == 1)
			do__ra(stack_a);
		else
			do__rra(stack_a);
	}
	sort_three(stack_a);
	do__pa(stack_a, stack_b);
}
