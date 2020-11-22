/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:48:39 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/21 12:26:32 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t l)
{
	unsigned long	i;
	char			*s;

	i = 0;
	s = (char*)b;
	while (l > i)
	{
		if (l > i)
			s[i] = c;
		i++;
	}
	return (s);
}
