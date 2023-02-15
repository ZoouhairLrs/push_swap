/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:21:50 by zlaarous          #+#    #+#             */
/*   Updated: 2023/02/15 13:22:41 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_element *stack_a, t_element *stack_b)
{
	int	i;

	// if (!DEBUG)
	// 	return ;
	i = 0;
	while (stack_a || stack_b)
	{
		if (stack_a)
			ft_putnbr_fd(stack_a->value, 1);
		else
			ft_putstr_fd("  ", 1);
		ft_putstr_fd("  ", 1);
		if (stack_b)
			ft_putnbr_fd(stack_b->value, 2);
		else
			ft_putstr_fd("  ", 1);
		ft_putchar_fd('\n', 1);
		i++;
		if (stack_a)
			stack_a = stack_a->next;
		if (stack_b)
			stack_b = stack_b->next;
	}
	ft_putstr_fd("_  _\na  b\n", 1);
}