/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:51:30 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/06 13:57:36 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstdel_r(t_list *lst, void (*del)(void *, size_t))
{
	if (lst == NULL)
		return ;
	ft_lstdel_r(lst->next, del);
	(*del)(lst->content, lst->content_size);
	free(lst);
}

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	ft_lstdel_r(*alst, del);
	*alst = NULL;
}
