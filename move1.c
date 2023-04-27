/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:29:08 by zlaarous          #+#    #+#             */
/*   Updated: 2023/04/27 09:21:32 by zlaarous         ###   ########.fr       */
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

void	rotate_both(t_element **stack_a, t_element **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

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

void	swap(t_element **stack)
{
	int	t;
	t_element *next_node;

	if (element_size(*stack) < 2)
		return ;
	next_node = (*stack)->next;
	t = (*stack)->value;
	(*stack)->value = next_node->value;//(*stack)->next->value;
	next_node->value = t;
	// (*stack)->next->value = t;
}

void	swap_both(t_element **stack_a, t_element **stack_b)
{
	swap(stack_a);
	swap(stack_b);
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
