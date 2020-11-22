/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:48:22 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/08 11:53:37 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t l)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;
	unsigned char	c1;

	i = 0;
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	c1 = c;
	while (l > i)
	{
		d[i] = s[i];
		if (s[i] == c1)
			return (&d[i + 1]);
		i++;
	}
	return (0);
}
