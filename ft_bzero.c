/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:48:19 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/21 11:05:23 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t l)
{
	unsigned long	i;
	char			*str;

	str = (char*)s;
	i = 0;
	while (i < l)
	{
		str[i] = 0;
		i++;
	}
}
