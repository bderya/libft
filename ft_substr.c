/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:02:18 by bderya            #+#    #+#             */
/*   Updated: 2022/03/30 11:09:11 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	char_count;
	size_t	dst_idx;
	size_t	remaining_count;
	size_t	limit;

	ret = (char *)malloc(sizeof(*s) *(len + 1));
	char_count = strlen(s);
	if (!ret || !s || start >= char_count)
		return (NULL);
	remaining_count = char_count - start;
	if (len < remaining_count)
		limit = len;
	else
		limit = remaining_count;
	src_idx = start;
	dst_idx = 0;
	while (dst_idx < limit)
	{
		ret[dst_idx] = s[src_idx];
		++dst_idx;
		++src_idx;
	}
	return (ret);
}
