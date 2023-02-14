/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:03:53 by zlaarous          #+#    #+#             */
/*   Updated: 2023/02/14 15:31:30 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_element *stack_a;
	// t_element *stack_b;
	
	if(argc == 1)
		return (0);
	// stack_a = malloc(sizeof(t_element));
	// stack_b = malloc(sizeof(t_element));
	
	// stack_a->value = ft_atoi(argv[1]);
	// stack_b->value = ft_atoi(argv[2]);
	parsing(&stack_a, argv, argc);
	
	
	// printf("%d\n", stack_a->index);
	// printf("%d\n", stack_b->index);
}