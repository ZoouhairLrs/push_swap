/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 04:37:25 by zlaarous          #+#    #+#             */
/*   Updated: 2022/11/02 17:12:54 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ca;
	size_t			i;

	ca = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ca[i] = 0;
		i++;
	}
}
