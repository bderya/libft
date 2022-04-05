/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:49:14 by bderya            #+#    #+#             */
/*   Updated: 2022/03/30 12:33:13 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst || !src)
	{
		return (NULL);
	}
	if (dst > src)
	{
		i = int (len) - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (len > i)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
