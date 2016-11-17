/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:24:50 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/16 17:25:28 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_slist.h"

void		*ft_slist_find(t_slist *slist, void *ref, t_f_comp f)
{
	while (slist != NULL)
	{
		if ((*f)(slist->content, ref))
			return (slist->content);
		slist = slist->next;
	}
	return (NULL);
}

void		ft_slist_apply(t_slist *slist, void (*f)(void *))
{
	while (slist != NULL)
	{
		(*f)(slist->content);
		slist = slist->next;
	}
}

int			ft_slist_count_if(t_slist *slist, t_bool (*f)(void *))
{
	int			n;

	n = 0;
	while (slist != NULL)
	{
		if ((*f)(slist->content))
			n++;
		slist = slist->next;
	}
	return (n);
}
