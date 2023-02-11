/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 05:02:17 by zlaarous          #+#    #+#             */
/*   Updated: 2022/11/03 15:58:35 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ca1;
	char	*ca2;

	ca1 = (char *)dst;
	ca2 = (char *)src;
	i = 0;
	if (ca1 == 0 && ca2 == 0)
		return (0);
	while (i < n)
	{
		ca1[i] = ca2[i];
		i++;
	}
	return (dst);
}
