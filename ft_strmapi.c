/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:08:46 by bderya            #+#    #+#             */
/*   Updated: 2022/04/05 17:19:15 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	size_t	i;

	s2 = ft_strdup(s);
	if (!s2)
		return (NULL);
	i = 0;
	while (s2[i])
	{
		s2[i] = (*f)(i, s2[i]);
		i++;
	}
	return (s2);
}
