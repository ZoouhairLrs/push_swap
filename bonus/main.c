/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:03:53 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/17 22:34:57 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

int	is_sorted(t_element **stack_a)
{
	t_element	*head;

	head = *stack_a;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

int	my_strlen(char **argv)
{
	int	l;

	if (!argv)
		return (0);
	l = 0;
	while (argv[l])
		l++;
	return (l);
}

void	checking_moves(t_element **stack_a, t_element **stack_b, char *line)
{
	if (!ft_strcmp(line, "pb\n"))
		do__pb(stack_a, stack_b);
	else if (!ft_strcmp(line, "pa\n"))
		do__pa(stack_a, stack_b);
	else if (!ft_strcmp(line, "sa\n"))
		do__sa(stack_a);
	else if (!ft_strcmp(line, "sb\n"))
		do__sb(stack_b);
	else if (!ft_strcmp(line, "ss\n"))
		do__ss(stack_a, stack_b);
	else if (!ft_strcmp(line, "ra\n"))
		do__ra(stack_a);
	else if (!ft_strcmp(line, "rb\n"))
		do__rb(stack_b);
	else if (!ft_strcmp(line, "rr\n"))
		do__rr(stack_a, stack_b);
	else if (!ft_strcmp(line, "rra\n"))
		do__rra(stack_a);
	else if (!ft_strcmp(line, "rrb\n"))
		do__rrb(stack_b);
	else if (!ft_strcmp(line, "rrr\n"))
		do__rrr(stack_a, stack_b);
	else
		exit_error();
}

int	main(int argc, char **argv)
{
	t_element	*stack_a;
	t_element	*stack_b;
	char		*line;

	stack_b = NULL;
	stack_a = NULL;
	if (argc == 1)
		return (0);
	parsing(&stack_a, argv, argc);
	if (is_sorted(&stack_a))
	{
		return (0);
	}
	line = get_next_line(0);
	while (!line)
	// sort(&stack_a, &stack_b);
}
