/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:59:39 by zlaarous          #+#    #+#             */
/*   Updated: 2022/10/30 00:41:53 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ca1;
	char	*tmp;

	ca1 = (char *)s;
	i = 0;
	c = (char)c;
	tmp = 0;
	if (c == '\0')
	{
		while (ca1[i])
			i++;
		return (ca1 + i);
	}
	else
	{
		while (*ca1)
		{
			if (*ca1 == c)
				tmp = ca1;
			ca1++;
		}
	}
	return (tmp);
}
