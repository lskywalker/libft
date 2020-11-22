/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:47:52 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/12 15:07:09 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	char	*source;

	i = 0;
	source = (char*)src;
	if (src == NULL)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize > 0)
		dstsize--;
	while (source[i] && i < dstsize)
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	while (source[i])
		i++;
	return (i);
}
