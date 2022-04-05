/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:07:04 by bderya            #+#    #+#             */
/*   Updated: 2022/03/30 18:46:20 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	a;

	if (needle[0] == '\0')
	{
		return (NULL);
	}
	i = 0;
	while (len > i)
	{
		j = 0;
		a = 0;
		while (needle[j + a] == haystack[i + a])
		{
			if (needle[j + a] == '\0')
			{
				return ((char *)haystack);
			}
			a++;
		}
		i++;
	}
	return (0);
}
