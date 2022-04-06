/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:06:46 by bderya            #+#    #+#             */
/*   Updated: 2022/03/29 17:06:46 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	src_idx;
	size_t	dst_idx;

	if (s1 && s2)
	{
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ret)
		return (NULL);
	src_idx = 0;
	dst_idx = 0;
	while (s1[src_idx])
	{
		ret[dst_idx++] = s1[src_idx];
		src_idx++;
	}
	src_idx = 0;
	while (s2[src_idx])
	{
		ret[dst_idx++] = s2[src_idx];
		src_idx++;
	}
	ret[dst_idx] = 0;
	return (ret);
	}
	return (NULL);
}
