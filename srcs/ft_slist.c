/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:46:36 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/16 17:25:53 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_slist.h"

void		ft_slist_push_front(t_slist **slist, void *content)
{
	t_slist	*elem;

	if (slist == NULL)
		return ;
	if ((elem = malloc(sizeof(t_slist))) == NULL)
		return ;
	elem->content = content;
	elem->next = *slist;
	*slist = elem;
}

static void	ft_slist_remove_remove(t_slist **slist)
{
	t_slist	*tmp;

	tmp = (*slist)->next;
	free(*slist);
	*slist = tmp;
}

void		ft_slist_remove(t_slist **slist, void *content)
{
	t_slist	*elem;

	if (slist == NULL)
		return ;
	if (*slist == NULL)
		return ;
	if ((*slist)->content == content)
	{
		ft_slist_remove_remove(slist);
		return ;
	}
	elem = *slist;
	while (elem->next != NULL)
	{
		if (elem->next->content == content)
		{
			ft_slist_remove_remove(&(elem->next));
			return ;
		}
		elem = elem->next;
	}
}
