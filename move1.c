/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:29:08 by zlaarous          #+#    #+#             */
/*   Updated: 2023/02/19 18:36:10 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(char *move, t_element *stack_a, t_element *stack_b)
{
	// (void)stack_a;
	// (void)stack_b;

	if(ft_strcmp(move, "ra"))
	{
		if(stack_a)
		{
			stack_b->value = stack_a->value;
		}
	}
	else if(ft_strcmp(move, "rb"))
		printf("\nrb");
}