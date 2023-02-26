/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:03:53 by zlaarous          #+#    #+#             */
/*   Updated: 2023/02/26 17:43:38 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_element *stack_a;
	t_element *stack_b;

	stack_b = NULL;
	stack_a = NULL;
	if(argc == 1)
		return (0);

	parsing(&stack_a, argv, argc);
	print_stacks(stack_a, stack_b);

	printf("\n************\n\n");
	sort("pb", &stack_a, &stack_b);
	print_stacks(stack_a, stack_b);

	printf("\n************\n\n");
	sort("pa", &stack_a, &stack_b);
	print_stacks(stack_a, stack_b);

	printf("\n************\n\n");
	sort("ra", &stack_a, &stack_b);
	print_stacks(stack_a, stack_b);

	// printf("\n************\n\n");
	// sort("rb", &stack_a, &stack_b);
	// print_stacks(stack_a, stack_b);
}
