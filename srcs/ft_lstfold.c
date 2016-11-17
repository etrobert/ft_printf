/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfold.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:47:25 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/06 16:59:59 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_lstfold(t_list *lst, void *(*f)(void *, void *))
{
	void	*tmp;
	void	*res;

	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (ft_memdup(lst->content, lst->content_size));
	tmp = (*f)(lst->content, lst->next->content);
	lst = lst->next->next;
	while (lst != NULL)
	{
		res = (*f)(lst->content, tmp);
		free(tmp);
		tmp = res;
		lst = lst->next;
	}
	return (tmp);
}
