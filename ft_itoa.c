/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:06:03 by bderya            #+#    #+#             */
/*   Updated: 2022/03/29 17:06:03 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	abs_val(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}

static void	reverse_string(char *s)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(s);
	i = 0;
	while (i < len / 2)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
		++i;
	}
}

char	*ft_itoa(int n)
{
	int	is_negative;
	int	str_idx;
	int	last_digit;
	char	*ret;

	is_negative = n < 0;
	*ret = (char *) ft_calloc(11 + is_negative, sizeof(char));
	if (!ret)
		return (NULL);
	if (n == 0)
		ret[0] = '0';
	str_idx = 0;
	while (n != 0)
	{
		last_digit = abs_val(n % 10);
		n /= 10;
		ret[str_idx++] = '0' + last_digit;
	}
	if (is_negative)
		ret[str_idx] = '-';
	reverse_string(ret);
	return (ret);
}
