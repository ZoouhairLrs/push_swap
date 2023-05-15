/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:03:53 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/15 23:54:35 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

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
	// int *tab;
	stack_b = NULL;
	(void) *stack_b;
	stack_a = NULL;
	if(argc == 1)
		return (0);
	parsing(&stack_a, argv, argc);
	if (is_sorted(&stack_a))
	{
		//don't miss free stacks.
		free(stack_a);
		free(stack_b);
		return (0);
	}
	sort(&stack_a, &stack_b);
	free(stack_a);
	free(stack_b);
}
