/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:04:15 by zlaarous          #+#    #+#             */
/*   Updated: 2023/05/19 03:47:59 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <fcntl.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_element
{
	int					value;
	int					index;
	int					pos;
	struct s_element	*next;
}						t_element;

typedef struct s_var_list
{
	int					*tab;
	int					len_stack;
	t_element			*stack_a;
	t_element			*stack_b;
}						t_var_list;

//header parsing
void					parsing(t_element **a, char **argv, int argc);
void					exit_error(void);
void					print_stacks(t_element *stack_a, t_element *stack_b);
void					sort(t_element **stack_a, t_element **stack_b);
int						ft_strcmp(char *a, char *b);
t_element				*new_element(int tmp, t_element *stack_a);
int						is_sorted(t_element **stack_a);
int						my_strlen(char **argv);

//header sorting
size_t					element_size(t_element *lst);
t_var_list				*sorting_stack_clone(t_element *stack_a,
							t_var_list *list);
void					create_index(t_element *stack_a);
void					sort_three(t_element **stack_a);
t_element				*find_min(t_element *stack_a);
t_element				*find_max(t_element *stack_a);
void					sort_forth(t_element **stack_a, t_element **stack_b);
int						find_in_stack(t_element *stack_a, int number);
void					sort_five(t_element **stack_a, t_element **stack_b);

//header utils
void					free_stack(t_element **stack);
int						lst_size(t_element *head);

//header movement
void					swap(t_element **stack);
void					do__sa(t_element **stack_a);
void					do__sb(t_element **stack_b);
void					do__ss(t_element **stack_a, t_element **stack_b);

void					push(t_element **stack_a, t_element **stack_b);
void					do__pa(t_element **stack_a, t_element **stack_b);
void					do__pb(t_element **stack_a, t_element **stack_b);

void					rotate(t_element **stack);
void					do__ra(t_element **stack_a);
void					do__rb(t_element **stack_b);
void					do__rr(t_element **stack_a, t_element **stack_b);

void					reverse_rotate(t_element **stack);
void					do__rra(t_element **stack_a);
void					do__rrb(t_element **stack_b);
void					do__rrr(t_element **stack_a, t_element **stack_b);

//big algo;
void					push_to_b(t_element **stack_a, t_element **stack_b);
void					sort_big_algo(t_element **stack_a, t_element **stack_b);
void					push_b_to_a(t_element **stack_a, t_element **stack_b);
t_element				*big_node_of_stack(t_element **stack_b);
int						pos_node(t_element **stack_b,
							t_element *big_small_node);
void					push_to_a(t_element **stack_a, t_element **stack_b,
							t_element *big_node);
t_element				*get_stack_bottom(t_element *stack);
t_element				*get_stack_before_bottom(t_element *stack);

#endif
