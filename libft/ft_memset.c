/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 03:14:34 by zlaarous          #+#    #+#             */
/*   Updated: 2022/11/06 16:48:19 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int		ca;
	unsigned char		*ca1;
	size_t				i;

	ca = (unsigned)c;
	ca1 = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ca1[i] = ca;
		i++;
	}
	return (b);
}
