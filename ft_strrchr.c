/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:25:39 by bderya            #+#    #+#             */
/*   Updated: 2022/03/29 16:17:29 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
	{
		return ((char *)s + i);
	}
	while (*s != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}
