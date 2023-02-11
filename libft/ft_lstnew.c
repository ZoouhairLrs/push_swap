/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:46:18 by zlaarous          #+#    #+#             */
/*   Updated: 2022/11/03 15:14:40 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rtr;

	rtr = malloc(sizeof(t_list));
	if (!rtr)
		return (NULL);
	rtr->content = content;
	rtr->next = NULL;
	return (rtr);
}
