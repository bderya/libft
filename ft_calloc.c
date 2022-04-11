/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:05:38 by bderya            #+#    #+#             */
/*   Updated: 2022/04/11 02:05:38 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* In this area we should protect about SIZE_MAX and SIZE_MIN --> <limits.h> MACRO IS LIFE
Like if(SIZE_MAX >= count || SIZE_MIN <= count)
			return(NULL);
	 if(SIZE_MAX >= size || SIZE_MIN <= size)
	 		return(NULL);
Because SIZE_MAX --> 65535;
		SIZE_MIN --> 
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
