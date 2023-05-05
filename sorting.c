/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:29:08 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/05 16:53:00 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	element_size(t_element *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

void	sort(char *move, t_element **stack_a, t_element **stack_b)
{
	// (void)stack_a;
	(void)stack_b;
	if(ft_strcmp(move, "rra"))
	{
		do__rra(stack_a);
	}
}
