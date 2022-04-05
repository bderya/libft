/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:37:39 by bderya            #+#    #+#             */
/*   Updated: 2022/03/29 16:19:06 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
		i++;
	}
	if (i == 0)
	{
		return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
