/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:08:08 by bderya            #+#    #+#             */
/*   Updated: 2022/03/30 18:57:39 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct 	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct 	s_split_next
{
	size_t start;
	size_t length;
}				t_split_next;

int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
size_t 	ft_strlen(const char *s);
void	*ft_memchr(const void *s, int c, size_t n)

#endif