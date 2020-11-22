/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:47:47 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/20 13:20:36 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	int		res;
	int		j;

	i = 0;
	j = 0;
	while (dst[i] && dstsize > 0)
	{
		i++;
		dstsize--;
	}
	res = i;
	while (dstsize > 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
		dstsize--;
	}
	while (src[j])
		j++;
	dst[i] = (dstsize != 0) ? '\0' : dst[i];
	return (res + j);
}
