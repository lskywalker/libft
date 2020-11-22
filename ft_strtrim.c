/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 17:21:54 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/12 14:34:39 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_trimback(const char *s1, const char *set, int k)
{
	int i;
	int j;

	i = ft_strlen(s1);
	if (i != 0)
		i--;
	while (i >= k - 1)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		i--;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		h;

	i = 0;
	if (!s1)
		return (0);
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		i++;
		if (set[j] == '\0')
			break ;
	}
	h = ft_trimback(s1, set, i);
	if (i > 0)
		i = i - 1;
	return (ft_substr(s1, i, h - i + 1));
}
