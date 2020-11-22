/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:48:27 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/08 11:53:42 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long	i;
	char			*st;

	st = (void*)s;
	i = 0;
	while (n > i)
	{
		if (st[i] == c)
			return (&st[i]);
		i++;
	}
	return (0);
}
