/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:48:08 by lsmit          #+#    #+#                */
/*   Updated: 2019/10/30 17:51:54 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int		d;
	char	*st;

	d = 0;
	st = (char*)str;
	while (st[d] != '\0')
		d++;
	while (d >= 0)
	{
		if (st[d] == c)
			return (&st[d]);
		d--;
	}
	return (0);
}
