/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:47:44 by lsmit          #+#    #+#                */
/*   Updated: 2019/10/30 17:52:09 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*st;

	i = 0;
	st = (char*)str;
	while (st[i] != '\0')
	{
		if (st[i] == c && c != '\0')
			return (&st[i]);
		i++;
	}
	if (c == '\0')
		return (&st[i]);
	return (0);
}
