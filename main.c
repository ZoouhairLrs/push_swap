/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:03:53 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/12 19:25:24 by zlaarous         ###   ########.fr       */
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
		return (0);
	}
	
	sort(&stack_a, &stack_b);
	// write (1, "\n", 1);
	// print_stacks(stack_a, stack_b);
	// print_stacks(NULL, stack_b);
	// int i = 0;
	// while (i < lst_size(stack_b))
	// {
	// 	printf("this is stack_b->value => %d\n", stack_b->value);
	// 	printf("this is stack_b->index => %d\n", stack_b->index);
	// 	stack_b = stack_b->next;
	// }
	// print_stacks(stack_a, stack_b);
	// tab = sorting_stack_clone(stack_a);
	// printf("%d\n", tab[2]);
}
