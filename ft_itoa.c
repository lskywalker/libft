/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 13:38:55 by lsmit          #+#    #+#                */
/*   Updated: 2020/02/05 14:17:31 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(int n)
{
	long long i;
	long long n2;

	i = 1;
	n2 = n;
	if (n2 < 0)
	{
		n2 = n2 * -1;
		i++;
	}
	i++;
	while (n2 > 9)
	{
		i++;
		n2 = n2 / 10;
	}
	return (i);
}

static char		*ft_whileloop(long long i, long long n2, long long m, char *r)
{
	long long old;

	old = n2;
	while (old != n2 || m == 1)
	{
		if (old != n2 / 10 && old > 9)
			old = n2 / 10;
		else
			old = n2;
		m = m * 10;
		while (old >= m)
			old = old / 10;
		r[i] = old % 10 + '0';
		i++;
	}
	r[i] = '\0';
	return (r);
}

char			*ft_itoa(int n)
{
	long long	i;
	long long	mult;
	char		*res;
	long long	n2;

	i = 0;
	mult = 1;
	n2 = n;
	res = malloc(sizeof(char) * ft_count(n2));
	if (!res)
		return (0);
	if (n2 < 0)
	{
		res[i] = 45;
		i++;
		n2 = n2 * -1;
	}
	res = ft_whileloop(i, n2, mult, res);
	return (res);
}
