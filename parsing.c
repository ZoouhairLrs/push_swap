/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:12:23 by zlaarous          #+#    #+#             */
/*   Updated: 2023/02/11 16:06:17 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_data(t_element *stack_a)
{
	t_element	*tmp;
	t_element	*tmp1;
	int	count;

	tmp = stack_a;
	while(tmp)
	{
		count = 0;
		tmp1 = tmp;
		while(tmp1)
		{
			if(tmp1->value == tmp->value)
			{
				count++;
				if(count >= 2)
					exit_error();
			}
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;
	}
}

t_element	*new_element(int tmp, t_element *stack_a)
{
	t_element	*element;

	element = malloc(sizeof(t_element));
	if (!element)
		return (NULL);
	element->value = tmp;
	element->next = stack_a;
	return (element);
}

void	create_new_element(char *strs, t_element **stack_a)
{
	int	tmp;

	if(!strs || !strs[0])
		exit_error();
	tmp = ft_atoi(strs);
	// printf("\ntmp = : %d\n", tmp);
	// printf("\nstrs[0] = : %c\n", strs[0]);
	if(tmp == 0)
		exit_error();
	*stack_a = new_element(tmp, *stack_a);
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

int	check_space(char *argv)
{
	int	i;

	i = 0;
	while(argv[i])
	{
		if(argv[i] == ' ')
			return(1);
		i++;
	}
	return (0);
}

void parsing (t_element **stack_a, char **argv, int argc)
{
	int	index;
	int	i;
	char	**strs;

	index = argc - 1;
	while(index > 0)
	{
		if(check_space(argv[index]))
		{
			strs = ft_split(argv[index], ' ');
			//printf("\containe dyal dak strs : %s\n", strs[1]);
			i = my_strlen(strs) - 1;
			//printf("\nlen dyal dak l i : %d\n", i);
			while(i >= 0)
			{
				create_new_element(strs[i], stack_a);
				printf("\nhada howa stack_a : %d\n", **stack_a);
				i--;
			}
		}
		else
		{
			create_new_element(argv[index], stack_a);
			printf("\nhada howa stack_a : %d\n", **stack_a);
		}
		index--;
	}
	check_data(*stack_a);
}
