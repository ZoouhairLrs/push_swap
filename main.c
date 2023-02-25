/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:03:53 by zlaarous          #+#    #+#             */
/*   Updated: 2023/02/25 16:08:36 by zlaarous         ###   ########.fr       */
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
	// sort("ra", stack_a, stack_b);
	// print_stacks(stack_a, stack_b);
}
