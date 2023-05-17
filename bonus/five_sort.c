/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:39:49 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/17 16:18:42 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

void	sort_five(t_element **stack_a, t_element **stack_b)
{
	t_element	*min;

	min = find_min(*stack_a);
	while (lst_size(*stack_a) > 4)
	{
		if (find_in_stack(*stack_a, min->index) == 0)
			do__pb(stack_a, stack_b);
		else if (find_in_stack(*stack_a, min->index) == 1)
			do__ra(stack_a);
		else
			do__rra(stack_a);
	}
	sort_forth(stack_a, stack_b);
	do__pa(stack_a, stack_b);
}
