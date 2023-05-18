/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:03:53 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/18 16:20:44 by zlaarous         ###   ########.fr       */
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
	if (ft_strcmp(line, "pb\n"))
		do__pb(stack_a, stack_b);
	else if (ft_strcmp(line, "pa\n"))
		do__pa(stack_a, stack_b);
	else if (ft_strcmp(line, "sa\n"))
		do__sa(stack_a);
	else if (ft_strcmp(line, "sb\n"))
		do__sb(stack_b);
	else if (ft_strcmp(line, "ss\n"))
		do__ss(stack_a, stack_b);
	else if (ft_strcmp(line, "rb\n"))
		do__rb(stack_b);
	else if (ft_strcmp(line, "ra\n"))
		do__ra(stack_a);
	else if (ft_strcmp(line, "rr\n"))
		do__rr(stack_a, stack_b);
	else if (ft_strcmp(line, "rrb\n"))
		do__rrb(stack_b);
	else if (ft_strcmp(line, "rra\n"))
		do__rra(stack_a);
	else if (ft_strcmp(line, "rrr\n"))
		do__rrr(stack_a, stack_b);
	else if (ft_strcmp(line, "\n"))
		return ;
	else
		exit_error();
}

int	main(int argc, char **argv)
{
	t_element	*stack_a;
	t_element	*stack_b;
	char		*line;
	int			size_stack;

	stack_b = NULL;
	line = NULL;
	stack_a = NULL;
	parsing(&stack_a, argv, argc);
	size_stack = lst_size(stack_a);
	if (size_stack == 0)
		exit(0);
	line = get_next_line(0);
	while (line)
	{
		checking_moves(&stack_a, &stack_b, line);
		free(line);
		line = get_next_line(0);
	}
	if (is_sorted(&stack_a) && lst_size(stack_b) == 0)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	free(stack_a);
	free(stack_b);
	return (0);
	// sort(&stack_a, &stack_b);
}
