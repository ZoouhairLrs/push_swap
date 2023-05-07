/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:39:49 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/08 00:42:26 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_five(t_element **stack_a, t_element **stack_b)
{
    t_element   *min;

    min = find_min(*stack_a);
    while (lst_size(*stack_a) > 4)
    {
        if (find_in_stack(*stack_a, min->value) == 0)
            do__pb(stack_b, stack_a);
        else if (find_in_stack(*stack_a, min->value) == 1)
            do__ra(stack_a);
        else
            do__rra(stack_a);
    }
    sort_forth(stack_a, stack_b);
    do__pa(stack_b, stack_a);
}