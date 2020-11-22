/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:48:02 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/12 13:10:43 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(const char *s1, const char *s2, int n)
{
	int				i;
	unsigned char	*s11;
	unsigned char	*s22;

	i = 0;
	s11 = (unsigned char*)s1;
	s22 = (unsigned char*)s2;
	while (s11[i] == s22[i] && i < n - 1 && s11[i] != '\0' && s22[i] != '\0')
		i++;
	if (s11[i] > s22[i] && n != 0 && s11[i] > 0)
		return (1);
	if (s11[i] < s22[i] && n != 0)
		return (-1);
	else
		return (0);
}
