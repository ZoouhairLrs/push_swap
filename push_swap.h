/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:04:15 by zlaarous          #+#    #+#             */
/*   Updated: 2023/02/15 13:22:53 by zlaarous         ###   ########.fr       */
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
void	parsing (t_element **a, char **argv, int argc);
void	exit_error(void);
void	print_stacks(t_element *stack_a, t_element *stack_b);

#endif
