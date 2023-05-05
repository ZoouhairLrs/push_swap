/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:29:08 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/05 13:21:37 by zlaarous         ###   ########.fr       */
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
	// (void)stack_b;

	if(ft_strcmp(move, "pb"))
	{
		push(stack_a, stack_b);
		ft_putstr_fd("pb\n", 1);
	}
	else if(ft_strcmp(move, "pa"))
	{
		push(stack_b, stack_a);
		ft_putstr_fd("pa\n", 1);
	}
	else if(ft_strcmp(move, "ra"))
	{
		rotate(stack_a);
		ft_putstr_fd("ra\n", 1);
	}
	// else if(ft_strcmp(move, "rb"))
	// {
	// 	rotate(stack_b);
	// ft_putstr_fd("rb", 1);
	// }
	else if(ft_strcmp(move, "rr"))
	{
		rotate_both(stack_a ,stack_b);
		ft_putstr_fd("rr\n", 1);
	}
	else if(ft_strcmp(move, "sa"))
	{
		swap(stack_a);
		ft_putstr_fd("sa\n", 1);
	}
	else if(ft_strcmp(move, "sb"))
	{
		swap(stack_b);
		ft_putstr_fd("sb\n", 1);
	}
}
