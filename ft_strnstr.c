/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 09:56:50 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/12 11:48:52 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		s = i;
		while (haystack[i] == needle[j] && i <= len)
		{
			if (needle[j + 1] == '\0')
				return ((char*)haystack + s);
			j++;
			i++;
		}
		i = s;
		i++;
	}
	return (NULL);
}
