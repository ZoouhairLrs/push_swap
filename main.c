/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:03:53 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/05 16:23:00 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int main(int argc, char **argv)
{
	t_element *stack_a;
	t_element *stack_b;

	stack_b = NULL;
	stack_a = NULL;

	if(argc == 1)
		return (0);
	parsing(&stack_a, argv, argc);
	if (is_sorted(&stack_a))
		return (0);
	print_stacks(stack_a, stack_b);
	sort("rra", &stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	// printf("\n************\n\n");
	// sort("ra", &stack_a, &stack_b);
	// print_stacks(stack_a, stack_b);

	// printf("\n************\n\n");
	// sort("sa", &stack_a, &stack_b);
	// print_stacks(stack_a, stack_b);
}
