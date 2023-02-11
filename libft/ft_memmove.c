/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:12:02 by zlaarous          #+#    #+#             */
/*   Updated: 2023/02/10 13:41:06 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ca1;
	char	*ca2;

	ca1 = (char *)dst;
	ca2 = (char *)src;
	if (dst > src)
	{
		while (len--)
		{
			ca1[len] = ca2[len];
		}
	}
	else
	{
		dst = ft_memcpy(dst, src, len);
	}
	return (dst);
}
