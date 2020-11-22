/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 16:30:28 by lsmit          #+#    #+#                */
/*   Updated: 2019/11/21 11:11:10 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*node;

	if (!lst)
		return ;
	node = *lst;
	while (node != NULL)
	{
		del(node->content);
		temp = node->next;
		free(node);
		node = temp;
	}
	*lst = NULL;
}
