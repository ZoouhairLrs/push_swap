/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:50:01 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/13 16:14:15 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three(t_element **stack_a)
{
    if ((*stack_a)->value > (*stack_a)->next->value 
        && (*stack_a)->value < (*stack_a)->next->next->value )
        do__sa(stack_a);
    else if ((*stack_a)->value > (*stack_a)->next->value
            && (*stack_a)->next->value > (*stack_a)->next->next->value)
    {
        do__sa(stack_a);
        do__rra(stack_a);
    }
    else if ((*stack_a)->value > (*stack_a)->next->value
            && (*stack_a)->next->value < (*stack_a)->next->next->value)
            do__ra(stack_a);
    else if ((*stack_a)->value < (*stack_a)->next->value
            && (*stack_a)->next->next->value < (*stack_a)->value)
            do__rra(stack_a);
    else if ((*stack_a)->value < (*stack_a)->next->value
            && (*stack_a)->next->value > (*stack_a)->next->next->value)
    {
        do__sa(stack_a);
        do__ra(stack_a);
    }
}
