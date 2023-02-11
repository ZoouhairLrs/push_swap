/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:28:33 by zlaarous          #+#    #+#             */
/*   Updated: 2022/11/01 23:12:24 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ca1;
	unsigned char	ca2;

	ca1 = (unsigned char *)s;
	ca2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ca1[i] == ca2)
		{
			return (&ca1[i]);
		}
		i++;
	}
	return (NULL);
}
