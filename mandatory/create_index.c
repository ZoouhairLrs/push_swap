/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:05:53 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/17 13:46:51 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_stack_clone(t_element *stack_a, t_var_list *list, int temp)
{
	int	i;
	int	j;

	i = 0;
	while (i < lst_size(stack_a) - 1)
	{
		j = 0;
		while (j < lst_size(stack_a) - i - 1)
		{
			if (list->tab[j] > list->tab[j + 1])
			{
				temp = list->tab[j];
				list->tab[j] = list->tab[j + 1];
				list->tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

t_var_list	*sorting_stack_clone(t_element *stack_a, t_var_list *list)
{
	int			i;
	int			temp;
	t_element	*head;

	temp = 0;
	list->tab = malloc(sizeof(int) * lst_size(stack_a));
	i = 0;
	if (!list->tab)
		return (NULL);
	head = stack_a;
	while (head)
	{
		list->tab[i] = head->value;
		head = head->next;
		i++;
	}
	swap_stack_clone(stack_a, list, temp);
	return (list);
}

void	create_index(t_element *stack_a)
{
	t_element	*head;
	int			len_stack;
	int			i;
	t_var_list	*list;

	list = NULL;
	head = stack_a;
	len_stack = lst_size(stack_a);
	list = malloc(sizeof(t_var_list));
	sorting_stack_clone(head, list);
	while (head)
	{
		i = 0;
		while (i < len_stack)
		{
			if (head->value == list->tab[i])
				head->index = i;
			i++;
		}
			head = head->next;
	}
	free(list);
}
