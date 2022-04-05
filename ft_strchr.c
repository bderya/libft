/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:17:38 by bderya            #+#    #+#             */
/*   Updated: 2022/03/29 16:20:36 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

char	*ft_strchr(const char *s, int c);
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (c == *s)
	{
		return ((char *)s);
	}
	return (0);
}
