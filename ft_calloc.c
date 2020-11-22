/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:47:00 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/25 12:16:13 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*space;
	size_t	i;

	space = malloc(count * size);
	if (!space)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		space[i] = 0;
		i++;
	}
	return (space);
}
