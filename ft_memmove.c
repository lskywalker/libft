/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:48:36 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/12 10:15:45 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char*)src;
	d = (char*)dst;
	i = 0;
	if (!s && !d)
		return (0);
	if (s > d)
		ft_memcpy(d, s, len);
	else if (s < d)
	{
		while (i < len)
			i++;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dst);
}
