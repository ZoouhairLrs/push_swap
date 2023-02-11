/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:14:56 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/29 17:41:59 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ca1;
	unsigned char	*ca2;

	i = 0;
	ca1 = (unsigned char *)s1;
	ca2 = (unsigned char *)s2;
	while (ca1[i] != '\0' && ca2[i] != '\0' && i < n)
	{
		if (ca1[i] > ca2[i])
			return (ca1[i] - ca2[i]);
		if (ca1[i] < ca2[i])
			return (ca1[i] - ca2[i]);
		i++;
	}
	if (i != n)
		return (ca1[i] - ca2[i]);
	return (0);
}
