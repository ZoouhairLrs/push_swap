/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:58:38 by zlaarous          #+#    #+#             */
/*   Updated: 2022/11/01 18:58:40 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s2;

	s2 = (char *)s;
	c = (char)c;
	i = 0;
	if (c == '\0')
	{
		while (s2[i])
			i++;
		return (s2 + i);
	}
	else
		while (*s2 != c && *s2)
			s2++;
	if (!*s2)
		return (NULL);
	return (s2);
}
