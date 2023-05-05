/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:04:15 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/05 22:07:57 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "./libft/libft.h"

typedef struct s_element {
	int	value;
	struct	s_element *next;
}	t_element;

//header parsing
void		parsing (t_element **a, char **argv, int argc);
void		exit_error(void);
void		print_stacks(t_element *stack_a, t_element *stack_b);
void		sort(t_element **stack_a, t_element **stack_b);
int			ft_strcmp(char *a, char *b);
t_element	*new_element(int tmp, t_element *stack_a);
int			is_sorted(t_element **stack_a);

//header sorting
size_t	element_size(t_element *lst);

//header utils
void	free_stack(t_element **stack);
int		lst_size(t_element *head);

//header movement
void	swap(t_element **stack);
void	do__sa(t_element **stack_a);
void	do__sb(t_element **stack_b);
void	do__ss(t_element **stack_a, t_element **stack_b);

void	push(t_element **stack_a, t_element **stack_b);
void	do__pa(t_element **stack_a, t_element **stack_b);
void	do__pb(t_element **stack_a, t_element **stack_b);

void	rotate(t_element **stack);
void	do__ra(t_element **stack_a);
void	do__rb(t_element **stack_b);
void	do__rr(t_element **stack_a, t_element **stack_b);

void	reverse_rotate(t_element **stack);
void	do__rra(t_element **stack_a);
void	do__rrb(t_element **stack_b);
void	do__rrr(t_element **stack_a, t_element **stack_b);


#endif
