/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:47:30 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/04 13:40:18 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int str)
{
	if (str >= 97 && str <= 122)
		str = str - 32;
	return (str);
}