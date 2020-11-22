/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 16:58:09 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/21 13:13:56 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	if (start > ft_strlen(s) && s[i])
		return (ft_strdup(""));
	while (i < start)
		i++;
	while (i < len + start && s[i])
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
