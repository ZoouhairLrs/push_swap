/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:03:31 by zlaarous          #+#    #+#             */
/*   Updated: 2022/11/01 18:33:56 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ca1;
	const unsigned char	*ca2;
	size_t				i;

	i = 0;
	ca1 = s1;
	ca2 = s2;
	while (i < n)
	{
		if (ca1[i] != ca2[i])
			return (ca1[i] - ca2[i]);
		i++;
	}
	return (0);
}
