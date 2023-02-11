/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:12:17 by zlaarous          #+#    #+#             */
/*   Updated: 2022/11/01 18:55:47 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ls;
	size_t	ld;
	size_t	i;
	size_t	j;

	if (size == 0 || size < ft_strlen(dst))
		return (size + ft_strlen(src));
	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	i = 0;
	j = ld;
	while (src[i] != 0 && j + 1 < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (ls + ld);
}
