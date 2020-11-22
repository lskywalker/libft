/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 13:30:16 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/25 18:33:54 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	**temp;

	if (!alst)
		return ;
	temp = alst;
	if (*temp)
	{
		while ((*temp)->next != NULL)
		{
			*temp = (*temp)->next;
		}
		(*temp)->next = new;
	}
	else
		ft_lstadd_front(alst, new);
}
